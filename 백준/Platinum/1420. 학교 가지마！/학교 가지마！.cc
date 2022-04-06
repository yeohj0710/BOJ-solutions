#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 25000
#define INF 1000000000
using namespace std;

struct Edge {
    int From, To, Capacity, Flow;
    Edge* Rev;
    Edge(int U, int V, int C) : From(U), To(V), Capacity(C), Flow(0) {}
    int Remain() { return Capacity - Flow; }
    void AddFlow(int Amount) {
        Flow += Amount;
        Rev->Flow -= Amount;
    }
};
vector<Edge*> Line[MAX];

void AddLine(int From, int To, int Capacity) {
    Edge* E = new Edge(From, To, Capacity);
    Edge* RevE = new Edge(To, From, 0);
    E->Rev = RevE, RevE->Rev = E;
    Line[From].push_back(E), Line[To].push_back(RevE);
}

int MaxFlow(int Sour, int Sink) {
    int FlowSum = 0;
    while(true) {
        vector<Edge*> Prev(MAX, nullptr);
        queue<int> Queue;
        Queue.push(Sour);

        while(!Queue.empty()) {
            int Curr = Queue.front(); Queue.pop();
            for(int i=0; i<Line[Curr].size(); i++) {
                int Next = Line[Curr][i]->To;
                if(Line[Curr][i]->Remain() > 0 && Prev[Next] == nullptr) {
                    Queue.push(Next);
                    Prev[Next] = Line[Curr][i];
                }
            }
        }
        if(Prev[Sink] == nullptr) break;

        for(int i=Sink; i!=Sour; i=Prev[i]->From)
            if(i != Sink && i != Sour+1) Prev[i]->AddFlow(1);
        FlowSum++;
    }
    return FlowSum;
}

int main() {
    int N, M, Sour, Sink, Exit = 0;
    scanf("%d %d\n", &N, &M);

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) AddLine((i*M+j)*2, (i*M+j)*2+1, 1);

    char Map[101][101];
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            Map[i][j] = getchar();
            if(Map[i][j] != '.' && Map[i][j] != '#'
               && ((j > 0 && Map[i][j-1] != '.' && Map[i][j-1] != '#')
                   || (i > 0 && Map[i-1][j] != '.' && Map[i-1][j] != '#'))) Exit = 1;
            else if(Map[i][j] == 'K') Sour = (i*M+j)*2+1;
            else if(Map[i][j] == 'H') Sink = (i*M+j)*2;
        }
        getchar();
    }
    if(Exit) {
        printf("-1");
        return 0;
    }
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(Map[i][j] == '#') continue;
            if(j+1 < M && Map[i][j+1] != '#') {
                AddLine((i*M+j)*2+1, (i*M+j+1)*2, 1);
                AddLine((i*M+j+1)*2+1, (i*M+j)*2, 1);
            }
            if(i+1 < N && Map[i+1][j] != '#') {
                AddLine((i*M+j)*2+1, ((i+1)*M+j)*2, 1);
                AddLine(((i+1)*M+j)*2+1, (i*M+j)*2, 1);
            }
        }
    }
    printf("%d", MaxFlow(Sour, Sink));
}
