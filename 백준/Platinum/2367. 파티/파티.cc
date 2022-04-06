#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 305
#define INF 1000000000
#define SOUR 1
#define SINK 2
using namespace std;

int Capacity[MAX][MAX], Flow[MAX][MAX];
vector<int> Line[MAX];

int MaxFlow(int Sour, int Sink) {
    int Sum = 0;
    while(1) {
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
    int N, K, D, A, B, Value, F;
    scanf("%d %d %d", &N, &K, &D);
    for(int i=3; i<N+3; i++) {
        Line[SOUR].push_back(i), Line[i].push_back(SOUR);
        Capacity[SOUR][i] = K;
    }
    for(int i=N+3; i<N+D+3; i++) {
        Line[i].push_back(SINK), Line[SINK].push_back(i);
        scanf("%d", &Value);
        Capacity[i][SINK] = Value;
    }
    for(int i=3; i<N+3; i++) {
        scanf("%d", &F);
        for(int j=0; j<F; j++) {
            scanf("%d", &Value);
            Line[i].push_back(N+2+Value), Line[N+2+Value].push_back(i);
            Capacity[i][N+2+Value] = 1;
        }
    }
    printf("%d", MaxFlow(SOUR, SINK));
}
