#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 55
#define INF 100000000000
using namespace std;

struct Edge {
    int Next, Capacity, Cost, Flow;
    Edge* Rev;
    Edge(int Next_, int Capacity_, int Cost_) : Next(Next_), Capacity(Capacity_), Cost(Cost_), Flow(0) {}
    int Remain() { return Capacity - Flow; }
    void AddFlow(int Amount) {
        Flow += Amount;
        Rev->Flow -= Amount;
    }
};
vector<Edge*> Line[MAX];

void AddLine(int From, int To, int Capacity, int Cost) {
    Edge* E = new Edge(To, Capacity, Cost);
    Edge* RevE = new Edge(From, 0, -Cost);
    E->Rev = RevE, RevE->Rev = E;
    Line[From].push_back(E), Line[To].push_back(RevE);
}

int MCMF(int Sour, int Sink) {
    int CostSum = 0;
    while(true) {
        Edge* Path[MAX];
        int Prev[MAX]; fill(Prev, Prev+MAX, -1);
        int Cost[MAX]; fill(Cost, Cost+MAX, INF); Cost[Sour] = 0;
        queue<int> Queue; Queue.push(Sour);
        bool inQueue[MAX] = {}; inQueue[Sour] = true;

        while(!Queue.empty()) {
            int Curr = Queue.front(); Queue.pop();
            inQueue[Curr] = false;
            for(int i=0; i<Line[Curr].size(); i++) {
                int Next = Line[Curr][i]->Next;
                if(Line[Curr][i]->Remain() > 0 && Cost[Curr] + Line[Curr][i]->Cost < Cost[Next]) {
                    Cost[Next] = Cost[Curr] + Line[Curr][i]->Cost;
                    Prev[Next] = Curr;
                    Path[Next] = Line[Curr][i];
                    if(!inQueue[Next]) Queue.push(Next), inQueue[Next] = true;
                }
            }
        }
        if(Prev[Sink] == -1) break;

        int Amount = INF;
        for(int i=Sink; i!=Sour; i=Prev[i])
            Amount = min(Amount, Path[i]->Remain());
        for(int i=Sink; i!=Sour; i=Prev[i]) {
            CostSum += Amount*Path[i]->Cost;
            Path[i]->AddFlow(Amount);
        }
    }
    return CostSum;
}

int main() {
    int N, P, Capacity[MAX][MAX], SinCost[MAX][MAX];
    scanf("%d %d", &N, &P);
    int Sour = N+1, Sink = N+2;
    AddLine(Sour, 1, P, 0);
    AddLine(N, Sink, P, 0);
    for(int i=1; i<N; i++) AddLine(i, i+1, INF, 0);
    for(int i=1; i<N; i++)
        for(int j=1; i+j<=N; j++) scanf("%d", &Capacity[i][i+j]);
    for(int i=1; i<N; i++)
        for(int j=1; i+j<=N; j++) {
            scanf("%d", &SinCost[i][i+j]);
            AddLine(i, i+j, Capacity[i][i+j], -SinCost[i][i+j]);
        }
    printf("%d", -MCMF(Sour, Sink));
}
