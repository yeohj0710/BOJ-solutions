#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 2005
#define INF 1000000000
using namespace std;

int N, M, L, U, V, Sour, Sink;
int Capacity[MAX][MAX] = {}, Flow[MAX][MAX] = {}, SinCost[MAX][MAX] = {};
vector<int> Line[MAX];

int in(int i) { return 2*i-1; }
int out(int i) { return 2*i; }

int MCMF() {
    int CostSum = 0;
    for(int i=0; i<2; i++) {
        int Parent[MAX]; fill(Parent, Parent+MAX, -1);
        int Cost[MAX]; fill(Cost, Cost+MAX, INF); Cost[Sour] = 0;
        queue<int> Queue; Queue.push(Sour);
        bool isInQueue[MAX] = {}; isInQueue[Sour] = true;

        while(!Queue.empty()) {
            int Curr = Queue.front();
            Queue.pop();
            isInQueue[Curr] = false;
            for(int i=0; i<Line[Curr].size(); i++) {
                int Next = Line[Curr][i];
                if(Capacity[Curr][Next] - Flow[Curr][Next] > 0
                   && Cost[Curr] + SinCost[Curr][Next] < Cost[Next]) {
                    Cost[Next] = Cost[Curr] + SinCost[Curr][Next];
                    Parent[Next] = Curr;
                    if(!isInQueue[Next]) {
                        Queue.push(Next);
                        isInQueue[Next] = true;
                    }
                }
            }
        }
        if(Parent[Sink] == -1) { printf("-1"); exit(0); }

        int Amount = INF;
        for(int i=Sink; i!=Sour; i=Parent[i])
            Amount = min(Amount, Capacity[Parent[i]][i] - Flow[Parent[i]][i]);
        for(int i=Sink; i!=Sour; i=Parent[i]) {
            CostSum += Amount*SinCost[Parent[i]][i];
            Flow[Parent[i]][i] += Amount;
            Flow[i][Parent[i]] -= Amount;
        }
    }
    return CostSum;
}

int main() {
    scanf("%d %d", &N, &M);
    for(int i=0; i<M; i++) {
        scanf("%d %d %d", &L, &U, &V);
        Line[out(U)].push_back(in(V)), Line[in(V)].push_back(out(U));
        Line[out(V)].push_back(in(U)), Line[in(U)].push_back(out(V));
        Capacity[out(U)][in(V)] = Capacity[out(V)][in(U)] = 1;
        SinCost[out(U)][in(V)] = SinCost[out(V)][in(U)] = L;
        SinCost[in(U)][out(V)] = SinCost[in(V)][out(U)] = -L;
    }
    for(int i=1; i<=N; i++) {
        Line[in(i)].push_back(out(i)), Line[out(i)].push_back(in(i));
        Capacity[in(i)][out(i)] = 1;
    }
    scanf("%d %d", &Sour, &Sink);
    Sour = Sour*2, Sink = Sink*2-1;
    printf("%d", MCMF());
}
