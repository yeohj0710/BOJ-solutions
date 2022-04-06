#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#define MAX 1105
#define INF 1000000000
#define SOUR 1
using namespace std;

int Capacity[MAX][MAX], Flow[MAX][MAX];
vector<int> Line[MAX];

int MaxFlow(int Sour, int Sink) {
    int FlowSum = 0;
    while(true) {
        int Parent[MAX];
        fill(Parent, Parent+MAX, -1);
        queue<int> Queue;
        Queue.push(Sour);
        Parent[Sour] = Sour;
        while(!Queue.empty()) {
            int Cur = Queue.front();
            Queue.pop();
            for(int i=0; i<Line[Cur].size(); i++) {
                int Next = Line[Cur][i];
                if(Capacity[Cur][Next] - Flow[Cur][Next] > 0 && Parent[Next] == -1) {
                    Queue.push(Next);
                    Parent[Next] = Cur;
                }
            }
        }
        if(Parent[Sink] == -1) break;

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
    int N, M, Cow, GroupSize[105] = {}, Limit[1005] = {};
    scanf("%d %d", &N, &M);
    int Sour = N+M+1, Sink = N+M+2;
    vector<int> GroupList[1005];
    for(int i=1; i<=M; i++) {
        scanf("%d", &GroupSize[i]);
        for(int j=0; j<GroupSize[i]; j++) {
            scanf("%d", &Cow);
            GroupList[Cow].push_back(i);
        }
    }
    for(int i=1; i<=N; i++) {
        double L = 0;
        for(int j=0; j<GroupList[i].size(); j++) L += 1.0/GroupSize[GroupList[i][j]];
        Limit[i] = (int)ceil(L);
    }
    for(int i=1; i<=N; i++) {
        Line[Sour].push_back(i), Line[i].push_back(Sour);
        Capacity[Sour][i] = Limit[i];
    }
    for(int i=1; i<=N; i++) {
        for(int j=0; j<GroupList[i].size(); j++) {
            int G = GroupList[i][j];
            Line[i].push_back(N+G), Line[N+G].push_back(i);
            Capacity[i][N+G] = 1;
        }
    }
    for(int i=N+1; i<=N+M; i++) {
        Line[i].push_back(Sink), Line[Sink].push_back(i);
        Capacity[i][Sink] = 1;
    }
    if(MaxFlow(Sour, Sink) == M) {
        for(int j=N+1; j<=N+M; j++)
            for(int i=1; i<=N; i++)
                if(Flow[i][j] == 1) printf("%d\n", i);
    }
    else printf("-1");
}
