#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 305
#define INF 100000000000
using namespace std;

long long Capacity[MAX][MAX], Flow[MAX][MAX], SinCost[MAX][MAX];
vector<int> Line[MAX];

void AddLine(int From, int To, long long Cap, long long Co) {
    Line[From].push_back(To), Line[To].push_back(From);
    Capacity[From][To] = Cap;
    SinCost[From][To] = Co, SinCost[To][From] = -Co;
}

long long MCMF(int Sour, int Sink) {
    long long CostSum = 0;
    while(true) {
        bool isInQueue[MAX] = {};
        int Parent[MAX] = {};
        long long Cost[MAX];
        fill(Cost, Cost+MAX, INF);
        Cost[Sour] = 0;

        queue<int> Queue;
        Queue.push(Sour);
        isInQueue[Sour] = true;

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
        if(!Parent[Sink]) break;

        long long Amount = INF;
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
    int N, K, Cost;
    scanf("%d %d", &N, &K);
    int Sour = 2*N+2, Sink = 2*N+3;
    for(int i=0; i<N; i++)
        for(int j=i+1; j<=N; j++) {
            scanf("%d", &Cost);
            AddLine(2*i+1, 2*j, 1, Cost);
        }
    AddLine(Sour, 1, K, 0), AddLine(1, Sink, K, 0);
    for(int i=1; i<=N; i++) AddLine(2*i, 2*i+1, 1, -10000000000);
    for(int i=1; i<=N; i++) AddLine(2*i+1, Sink, 1, 0);
    printf("%lld", MCMF(Sour, Sink) + 10000000000*N);
}
