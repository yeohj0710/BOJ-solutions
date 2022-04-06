#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 10005
#define INF 1000000000
using namespace std;

int R, C;
int in(int i, int j) { return ((i-1)*C+j)*2-1; }
int out(int i, int j) { return ((i-1)*C+j)*2; }

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

void AddLine(int From, int To) {
    Edge* E = new Edge(From, To, 1);
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

        int Amount = INF;
        for(int i=Sink; i!=Sour; i=Prev[i]->From)
            Amount = min(Amount, Prev[i]->Remain());
        for(int i=Sink; i!=Sour; i=Prev[i]->From)
            if(i != Sink && i != Sour+1) Prev[i]->AddFlow(Amount);
        FlowSum += Amount;
    }
    return FlowSum;
}

int main() {
    int Sour = 10001, Sink = 10002, Dir[2][4] = {{-1, 1, 0, 0}, {0, 0, -1, 1}};
    char Board[50][50];
    scanf("%d %d\n", &R, &C);
    for(int i=1; i<=R; i++) {
        for(int j=1; j<=C; j++) Board[i][j] = getchar();
        getchar();
    }
    for(int i=1; i<=R; i++)
        for(int j=1; j<=C; j++) {
            AddLine(in(i, j), out(i, j));
            if((i+j)%2 == 1 && i%2 == 1) AddLine(Sour, in(i, j));
            if((i+j)%2 == 1 && i%2 == 0) AddLine(out(i, j), Sink);
        }
    for(int i=1; i<=R; i++)
        for(int j=1; j<=C; j++) {
            if(Board[i][j] == 'X') continue;
            else if((i+j)%2 == 1 && i%2 == 1)
                for(int k=0; k<4; k++) {
                    int iNext = i+Dir[0][k], jNext = j+Dir[1][k];
                    if(!(iNext>=1 && iNext<=R && jNext>=1 && jNext<=C)) continue;
                    if(Board[iNext][jNext] == '.') AddLine(out(i, j), in(iNext, jNext));
                }
            else if((i+j)%2 == 1 && i%2 == 0)
                for(int k=0; k<4; k++) {
                    int iNext = i+Dir[0][k], jNext = j+Dir[1][k];
                    if(!(iNext>=1 && iNext<=R && jNext>=1 && jNext<=C)) continue;
                    if(Board[iNext][jNext] == '.') AddLine(out(iNext, jNext), in(i, j));
                }
        }
    printf("%d", MaxFlow(Sour, Sink));
}
