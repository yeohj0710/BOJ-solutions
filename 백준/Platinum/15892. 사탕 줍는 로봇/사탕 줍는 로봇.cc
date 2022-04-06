#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 305
#define INF 1000000000
#define SOUR 1
using namespace std;

int Capacity[MAX][MAX], Flow[MAX][MAX];
vector<int> Line[MAX];

int MaxFlow(int Sour, int Sink) {
    int Count = 0;
    while(true) {
        int Parent[MAX] = {};
        queue<int> Queue;
        Queue.push(Sour);
        Parent[Sour] = Sour;
        while(!Queue.empty() && !Parent[Sink]) {
            int Cur = Queue.front();
            Queue.pop();
            for(int i=0; i<Line[Cur].size(); i++) {
                int Next = Line[Cur][i];
                if(Capacity[Cur][Next] - Flow[Cur][Next] > 0 && !Parent[Next]) {
                    Queue.push(Next);
                    Parent[Next] = Cur;
                    if(Next == Sink) break;
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
        Count += Amount;
    }
    return Count;
}

int main() {
    int N, M, A, B, Amount;
    scanf("%d %d", &N, &M);
    int SINK = N;
    for(int i=0; i<M; i++) {
        scanf("%d %d %d", &A, &B, &Amount);
        Line[A].push_back(B), Line[B].push_back(A);
        Capacity[A][B] += Amount;
        Capacity[B][A] += Amount;
    }
    printf("%d", MaxFlow(SOUR, SINK));
}
