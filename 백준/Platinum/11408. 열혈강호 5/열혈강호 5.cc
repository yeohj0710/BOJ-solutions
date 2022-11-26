#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 1000
#define INF 1000000000
#define SOUR 1
#define SINK 2
using namespace std;

int Count = 0, CostSum = 0;
int Capacity[MAX][MAX], Flow[MAX][MAX], SDist[MAX][MAX];
vector<int> Line[MAX];

void MaxFlow(int Sour, int Sink) {
    while(true) {
        bool isInQueue[MAX] = {};
        int Parent[MAX] = {}, Dist[MAX];
        fill(Dist, Dist+MAX, INF);
        Dist[SOUR] = 0;

        queue<int> Queue;
        Queue.push(Sour);
        isInQueue[Sour] = true;

        while(!Queue.empty()) {
            int Cur = Queue.front();
            Queue.pop();
            isInQueue[Cur] = false;
            for(int i=0; i<Line[Cur].size(); i++) {
                int Next = Line[Cur][i];
                if(Capacity[Cur][Next] - Flow[Cur][Next] > 0
                   && Dist[Cur] + SDist[Cur][Next] < Dist[Next]) {
                    Dist[Next] = Dist[Cur] + SDist[Cur][Next];
                    Parent[Next] = Cur;
                    if(!isInQueue[Next]) {
                        Queue.push(Next);
                        isInQueue[Next] = true;
                    }
                }
            }
        }
        if(!Parent[Sink]) break;

        int Amount = INF;
        for(int i=Sink; i!=Sour; i=Parent[i])
            Amount = min(Amount, Capacity[Parent[i]][i] - Flow[Parent[i]][i]);
        for(int i=Sink; i!=Sour; i=Parent[i]) {
            CostSum += Amount*SDist[Parent[i]][i];
            Flow[Parent[i]][i] += Amount;
            Flow[i][Parent[i]] -= Amount;
        }
        Count++;
    }
}

int main() {
    int N, M, W, WNum, D;
    scanf("%d %d", &N, &M);
    for(int i=3; i<3+N; i++) {
        Line[SOUR].push_back(i), Line[i].push_back(SOUR);
        Capacity[SOUR][i] = 1;
        scanf("%d", &W);
        for(int j=0; j<W; j++) {
            scanf("%d %d", &WNum, &D);
            Line[i].push_back(2+N+WNum), Line[2+N+WNum].push_back(i);
            SDist[i][2+N+WNum] = D, SDist[2+N+WNum][i] = -D;
            Capacity[i][2+N+WNum] = 1;
        }
    }
    for(int i=3+N; i<3+N+M; i++) {
        Line[SINK].push_back(i), Line[i].push_back(SINK);
        Capacity[i][SINK] = 1;
    }
    MaxFlow(SOUR, SINK);
    printf("%d\n%d", Count, CostSum);
}
