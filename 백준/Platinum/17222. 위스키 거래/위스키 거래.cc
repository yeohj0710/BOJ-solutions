#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 205
#define INF 10000000000
using namespace std;

long long Capacity[MAX][MAX], Flow[MAX][MAX];
vector<int> Line[MAX];

long long MaxFlow(int Sour, int Sink) {
    long long Count = 0;
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

        long long Amount = INF;
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
    int N, M, K, Node;
    scanf("%d %d", &N, &M);
    int Sour = N+M+1, Sink = N+M+2;
    vector<long long> CapacityN(N+1);
    for(int i=1; i<=N; i++) scanf("%lld", &CapacityN[i]);
    for(int i=N+1; i<=N+M; i++) {
        Line[Sour].push_back(i), Line[i].push_back(Sour);
        scanf("%lld", &Capacity[Sour][i]);
    }
    for(int i=1; i<=N; i++) {
        Line[i].push_back(Sink), Line[Sink].push_back(i);
        Capacity[i][Sink] = INF;
    }
    for(int i=N+1; i<=N+M; i++) {
        scanf("%d", &K);
        for(int j=0; j<K; j++) {
            scanf("%d", &Node);
            Line[i].push_back(Node), Line[Node].push_back(i);
            if(Node <= N) Capacity[i][Node] = CapacityN[Node];
            else Capacity[i][Node] = Capacity[Sour][Node];
        }
    }
    printf("%lld", MaxFlow(Sour, Sink));
}
