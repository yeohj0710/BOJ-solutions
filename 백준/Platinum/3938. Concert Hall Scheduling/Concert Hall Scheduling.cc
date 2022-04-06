#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 370
#define INF 1000000000
using namespace std;

struct Edge {
    int From, To, Capacity, Cost, Flow;
    Edge* Rev;
    Edge(int U, int V, int Cap, int Co) : From(U), To(V), Capacity(Cap), Cost(Co), Flow(0) {}
    int Remain() { return Capacity - Flow; }
    void AddFlow(int Amount) {
        Flow += Amount;
        Rev->Flow -= Amount;
    }
};
vector<Edge*> Line[MAX];

void AddLine(int From, int To, int Capacity, int Cost) {
    Edge* E = new Edge(From, To, Capacity, Cost);
    Edge* RevE = new Edge(To, From, 0, -Cost);
    E->Rev = RevE, RevE->Rev = E;
    Line[From].push_back(E), Line[To].push_back(RevE);
}

int MCMF(int Sour, int Sink) {
    int CostSum = 0;
    while(true) {
        Edge* Prev[MAX]; fill(Prev, Prev+MAX, nullptr);
        int Cost[MAX]; fill(Cost, Cost+MAX, INF); Cost[Sour] = 0;

        queue<int> Queue; Queue.push(Sour);
        bool isInQueue[MAX] = {}; isInQueue[Sour] = true;

        while(!Queue.empty()) {
            int Curr = Queue.front(); Queue.pop();
            isInQueue[Curr] = false;
            for(int i=0; i<Line[Curr].size(); i++) {
                int Next = Line[Curr][i]->To;
                if(Line[Curr][i]->Remain() > 0 && Cost[Curr] + Line[Curr][i]->Cost < Cost[Next]) {
                    Cost[Next] = Cost[Curr] + Line[Curr][i]->Cost;
                    Prev[Next] = Line[Curr][i]->Rev;
                    if(!isInQueue[Next]) {
                        Queue.push(Next);
                        isInQueue[Next] = true;
                    }
                }
            }
        }
        if(Prev[Sink] == nullptr) break;

        int Amount = INF;
        for(int i=Sink; i!=Sour; i=Prev[i]->To)
            Amount = min(Prev[i]->Rev->Remain(), Amount);
        for(int i=Sink; i!=Sour; i=Prev[i]->To) {
            CostSum += -Prev[i]->Cost * Amount;
            Prev[i]->AddFlow(-Amount);
        }
    }
    return CostSum;
}

int main() {
    int N, M, From, To, Cost;
    while(1) {
        scanf("%d", &N);
        if(N == 0) break;

        for(int i=0; i<MAX; i++) vector<Edge*>().swap(Line[i]);
        int Sour = 367, Sink = 368;
        AddLine(Sour, 1, 2, 0), AddLine(366, Sink, 2, 0);
        for(int i=1; i<=365; i++) AddLine(i, i+1, 2, 0);
        for(int i=0; i<N; i++) {
            scanf("%d %d %d", &From, &To, &Cost);
            AddLine(From, To+1, 1, -Cost);
        }
        printf("%d\n", -MCMF(Sour, Sink));
    }
}
