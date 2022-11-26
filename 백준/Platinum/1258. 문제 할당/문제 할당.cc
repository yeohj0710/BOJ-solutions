#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 205
#define INF 1000000000
using namespace std;

int Capacity[MAX][MAX], Flow[MAX][MAX], SinDist[MAX][MAX];
vector<int> Line[MAX];

int MCMF(int Sour, int Sink) {
    int CostSum = 0;
    while(true) {
        bool isInQueue[MAX] = {};
        int Parent[MAX] = {}, Dist[MAX];
        fill(Dist, Dist+MAX, INF);
        Dist[Sour] = 0;

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
            CostSum += SinDist[Parent[i]][i];
            Flow[Parent[i]][i] += Amount;
            Flow[i][Parent[i]] -= Amount;
        }
    }
    return CostSum;
}

int main() {
    int N;
    scanf("%d", &N);
    int Sour = 2*N+1, Sink = 2*N+2;
    for(int i=1; i<=N; i++) {
        Line[Sour].push_back(i), Line[i].push_back(Sour);
        Capacity[Sour][i] = 1;
    }
    for(int i=N+1; i<=2*N; i++) {
        Line[i].push_back(Sink), Line[Sink].push_back(i);
        Capacity[i][Sink] = 1;
    }
    for(int i=1; i<=N; i++) {
        for(int j=N+1; j<=2*N; j++) {
            Line[i].push_back(j), Line[j].push_back(i);
            Capacity[i][j] = 1;
            scanf("%d", &SinDist[i][j]);
            SinDist[j][i] = -SinDist[i][j];
        }
    }
    printf("%d", MCMF(Sour, Sink));
}
