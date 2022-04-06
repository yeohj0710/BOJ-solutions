#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 205
#define INF 1000000000
#define SOUR 1
#define SINK 2
using namespace std;

int Count = 0, CostSum = 0;
int Capacity[MAX][MAX], Flow[MAX][MAX], SinDist[MAX][MAX];
vector<int> Line[MAX];

void MCMF(int Sour, int Sink) {
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
                   && Dist[Cur] + SinDist[Cur][Next] < Dist[Next]) {
                    Dist[Next] = Dist[Cur] + SinDist[Cur][Next];
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
            CostSum += Amount*SinDist[Parent[i]][i];
            Flow[Parent[i]][i] += Amount;
            Flow[i][Parent[i]] -= Amount;
        }
        Count += Amount;
    }
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
    for(int i=3; i<M+3; i++) {
        for(int j=M+3; j<M+N+3; j++) {
            scanf("%d", &SinDist[i][j]);
            SinDist[j][i] = -SinDist[i][j];
        }
    }
    MCMF(SOUR, SINK);
    printf("%d\n%d", Count, CostSum);
}
