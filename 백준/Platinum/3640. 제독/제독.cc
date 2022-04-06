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

int MCMF(int Sour, int Sink) {
    int CostSum = 0;
    while(true) {
        int Prev[MAX], Cost[MAX];
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
        if(Prev[Sink] == -1) break;

        for(int i=Sink; i!=Sour; i=Prev[i]) {
            CostSum += SinCost[Prev[i]][i];
            Flow[Prev[i]][i]++;
            Flow[i][Prev[i]]--;
        }
    }
    return CostSum;
}

int main() {
    int N, M, From, To, Cost;
    while(scanf("%d", &N) != EOF) {
        scanf("%d", &M);

        fill(&Capacity[0][0], &Capacity[MAX-1][MAX], 0);
        fill(&Flow[0][0], &Flow[MAX-1][MAX], 0);
        fill(&SinCost[0][0], &SinCost[MAX-1][MAX], INF);
        for(int i=0; i<MAX; i++) vector<int>().swap(Line[i]);

        int Sour = N*2+2, Sink = N*2+3;
        AddLine(Sour, 1*2, 2, 0), AddLine(N*2+1, Sink, 2, 0);
        AddLine(1*2, 1*2+1, 2, 0), AddLine(N*2, N*2+1, 2, 0);
        for(int i=2; i<N; i++) AddLine(i*2, i*2+1, 1, 0);
        for(int i=0; i<M; i++) {
            scanf("%d %d %d", &From, &To, &Cost);
            AddLine(From*2+1, To*2, 1, Cost);
        }
        printf("%d\n", MCMF(Sour, Sink));
    }
}
