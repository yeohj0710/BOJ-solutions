#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 2005
#define INF 1000000000
#define SOUR 1
#define SINK 2
#define NODE_K 3
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
    int N, M, K, W, WNum;
    scanf("%d %d %d", &N, &M, &K);
    Line[SOUR].push_back(NODE_K), Line[NODE_K].push_back(SOUR);
    Capacity[SOUR][NODE_K] = K;
    for(int i=4; i<N+4; i++) {
        Line[SOUR].push_back(i), Line[i].push_back(SOUR);
        Line[NODE_K].push_back(i), Line[i].push_back(NODE_K);
        Capacity[SOUR][i] = 1, Capacity[NODE_K][i] = K;
        scanf("%d", &W);
        for(int j=0; j<W; j++) {
            scanf("%d", &WNum);
            Line[i].push_back(N+3+WNum), Line[N+3+WNum].push_back(i);
            Capacity[i][N+3+WNum] = 1;
        }
    }
    for(int i=N+4; i<N+M+4; i++) {
        Line[SINK].push_back(i), Line[i].push_back(SINK);
        Capacity[i][SINK] = 1;
    }
    printf("%d", MaxFlow(SOUR, SINK));
}
