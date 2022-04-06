#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 2005
#define INF 1000000000
using namespace std;

int Capacity[MAX][MAX], Flow[MAX][MAX], SinCost[MAX][MAX];
vector<int> Line[MAX];

void AddLine(int From, int To, int Cap, int Cost) {
    Line[From].push_back(To), Line[To].push_back(From);
    Capacity[From][To] = Cap;
    SinCost[From][To] = Cost, SinCost[To][From] = -Cost;
}

long long MCMF(int Sour, int Sink) {
    int Prev[MAX], Cost[MAX], CostSum = 0;
    fill(Prev, Prev+MAX, -1);
    fill(Cost, Cost+MAX, INF);
    Cost[Sour] = 0;

    queue<int> Queue;
    Queue.push(Sour);

    bool isInQueue[MAX];
    fill(isInQueue, isInQueue+MAX, false);
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
                Prev[Next] = Curr;
                if(!isInQueue[Next]) {
                    Queue.push(Next);
                    isInQueue[Next] = true;
                }
            }
        }
    }

    for(int i=Sink; i!=Sour; i=Prev[i]) {
        CostSum += SinCost[Prev[i]][i];
        Flow[Prev[i]][i]++;
        Flow[i][Prev[i]]--;
    }
    return CostSum;
}

int main() {
    int N, M, From, To, Cost;
    scanf("%d %d", &N, &M);
    int Sour = 1*2+1, Sink = N*2;
    for(int i=1; i<=N; i++) {
        Line[i*2].push_back(i*2+1), Line[i*2+1].push_back(i*2);
        Capacity[i*2][i*2+1] = Capacity[i*2+1][i*2] = INF;
    }
    for(int i=0; i<M; i++) {
        scanf("%d %d %d", &From, &To, &Cost);
        AddLine(From*2+1, To*2, 1, Cost);
        AddLine(To*2+1, From*2, 1, Cost);
    }
    printf("%lld", MCMF(Sour, Sink) + MCMF(Sour, Sink));
}
