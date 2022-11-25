#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 205
#define INF 1000000000
#define SOUR 1
using namespace std;

int Capacity[MAX][MAX], Flow[MAX][MAX];
vector<int> Line[MAX];

int MaxFlow(int Sour, int Sink) {
    int Sum = 0;
    while(true) {
        int Parent[MAX] = {};
        queue<int> Queue;
        Queue.push(Sour);
        while(!Queue.empty() && !Parent[Sink]) {
            int Cur = Queue.front();
            Queue.pop();
            for(int i=0; i<Line[Cur].size(); i++) {
                int Next = Line[Cur][i];
                if(Capacity[Cur][Next] - Flow[Cur][Next] > 0 && !Parent[Next]) {
                    Queue.push(Next);
                    Parent[Next] = Cur;
                }
            }
        }
        if(!Parent[Sink]) break;

        int Amount = INF;
        for(int i=Sink; i!=Sour; i=Parent[i])
            Amount = min(Amount, Capacity[Parent[i]][i] - Flow[Parent[i]][i]);
        for(int i=Sink; i!=Sour; i=Parent[i]) {
            Flow[Parent[i]][i] += Amount;
            Flow[i][Parent[i]] -= Amount;
        }
        Sum += Amount;
    }
    return Sum;
}

int main() {
    int T, N, M, A, B;
    scanf("%d", &T);
    for(int t=0; t<T; t++) {
        fill(&Capacity[0][0], &Capacity[MAX-1][MAX], 0);
        fill(&Flow[0][0], &Flow[MAX-1][MAX], 0);
        for(int i=0; i<MAX; i++) vector<int>().swap(Line[i]);
        scanf("%d %d", &N, &M);
        int SINK = N;
        for(int i=0; i<M; i++) {
            scanf("%d %d", &A, &B);
            Line[A].push_back(B), Line[B].push_back(A);
            if(A == 1 || B == N) Capacity[A][B] = 1;
            else Capacity[A][B] = INF;
        }
        printf("%d\n", MaxFlow(SOUR, SINK));
    }
}
