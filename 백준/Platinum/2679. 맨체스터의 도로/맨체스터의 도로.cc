#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 1005
#define INF 1000000000
using namespace std;

int Sour, Sink;
int Capacity[MAX][MAX], Flow[MAX][MAX];
vector<int> Line[MAX];

int MaxFlow() {
    int FlowSum = 0;
    while(true) {
        int Prev[MAX];
        fill(&Prev[0], &Prev[MAX], -1);
        queue<int> Queue;
        Queue.push(Sour);
        while(!Queue.empty()) {
            int Curr = Queue.front();
            Queue.pop();
            for(int i=0; i<Line[Curr].size(); i++) {
                int Next = Line[Curr][i];
                if(Capacity[Curr][Next] - Flow[Curr][Next] > 0 && Prev[Next] == -1) {
                    Queue.push(Next);
                    Prev[Next] = Curr;
                }
            }
        }
        if(Prev[Sink] == -1) break;

        int Amount = INF;
        for(int i=Sink; i!=Sour; i=Prev[i])
            Amount = min(Amount, Capacity[Prev[i]][i] - Flow[Prev[i]][i]);
        for(int i=Sink; i!=Sour; i=Prev[i]) {
            Flow[Prev[i]][i] += Amount;
            Flow[i][Prev[i]] -= Amount;
        }
        FlowSum += Amount;
    }
    return FlowSum;
}

int MaxRoute[MAX];
int MaxAmount(int Curr) {
    int &Amount = MaxRoute[Curr];
    if(Amount != -1) return Amount;
    if(Curr == Sink) return Amount = INF;
    Amount = 0;
    for(int i=0; i<Line[Curr].size(); i++) {
        int Next = Line[Curr][i];
        Amount = max(Amount, min(MaxAmount(Next), Capacity[Curr][Next]));
    }
    return Amount;
}

int main() {
    int T, N, E, A, B, Amount;
    scanf("%d", &T);
    for(int t=0; t<T; t++) {
        fill(&Capacity[0][0], &Capacity[MAX-1][MAX], 0);
        fill(&Flow[0][0], &Flow[MAX-1][MAX], 0);
        fill(&MaxRoute[0], &MaxRoute[MAX], -1);
        for(int i=0; i<MAX; i++) vector<int>().swap(Line[i]);
        scanf("%d %d %d %d", &N, &E, &Sour, &Sink);
        for(int i=0; i<E; i++) {
            scanf("%d %d %d", &A, &B, &Amount);
            Line[A].push_back(B), Line[B].push_back(A);
            Capacity[A][B] += Amount;
        }
        printf("%.3lf\n", (double)MaxFlow()/MaxAmount(Sour));
    }
}
