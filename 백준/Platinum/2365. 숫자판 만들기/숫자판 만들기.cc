#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 105
#define INF 1000000000
using namespace std;

int Sum;
int Capacity[MAX][MAX], Flow[MAX][MAX];
vector<int> Line[MAX];

int MaxFlow(int Sour, int Sink) {
    int FlowSum = 0;
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
        FlowSum += Amount;
    }
    return FlowSum;
}

int main() {
    int N;
    scanf("%d", &N);
    int Sour = 2*N+1, Sink = 2*N+2;
    for(int i=1; i<=N; i++) {
        Line[Sour].push_back(i), Line[i].push_back(Sour);
        scanf("%d", &Capacity[Sour][i]);
        Sum += Capacity[Sour][i];
    }
    for(int i=N+1; i<=2*N; i++) {
        Line[i].push_back(Sink), Line[Sink].push_back(i);
        scanf("%d", &Capacity[i][Sink]);
    }
    for(int i=1; i<=N; i++)
        for(int j=N+1; j<=2*N; j++)
            Line[i].push_back(j), Line[j].push_back(i);
    int Left = 0, Right = 10000, Mid, Ans;
    while(Left <= Right) {
        Mid = (Left + Right)/2;
        for(int i=1; i<=N; i++)
            for(int j=N+1; j<=2*N; j++) Capacity[i][j] = Mid;
        fill(&Flow[0][0], &Flow[MAX-1][MAX], 0);
        if(MaxFlow(Sour, Sink) == Sum) {
            Ans = Mid;
            Right = Mid-1;
        }
        else Left = Mid+1;
    }
    printf("%d\n", Ans);

    for(int i=1; i<=N; i++)
        for(int j=N+1; j<=2*N; j++) Capacity[i][j] = Ans;
    fill(&Flow[0][0], &Flow[MAX-1][MAX], 0);
    MaxFlow(Sour, Sink);
    for(int i=1; i<=N; i++) {
        for(int j=N+1; j<=2*N; j++) printf("%d ", Flow[i][j]);
        printf("\n");
    }
}
