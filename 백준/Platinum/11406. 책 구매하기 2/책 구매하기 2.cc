#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 205
#define INF 1000000000
#define SOUR 1
#define SINK 2
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
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=M+3; i<M+N+3; i++) {
        Line[i].push_back(SINK), Line[SINK].push_back(i);
        scanf("%d", &Capacity[i][SINK]);
    }
    for(int i=3; i<M+3; i++) {
        Line[SOUR].push_back(i), Line[i].push_back(SOUR);
        scanf("%d", &Capacity[SOUR][i]);
    }
    for(int i=3; i<M+3; i++) {
        for(int j=M+3; j<M+N+3; j++) {
            Line[i].push_back(j), Line[j].push_back(i);
            scanf("%d", &Capacity[i][j]);
        }
    }
    printf("%d", MaxFlow(SOUR, SINK));
}
