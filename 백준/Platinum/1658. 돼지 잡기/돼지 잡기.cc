#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 1105
#define INF 1000000000
using namespace std;

int Capacity[MAX][MAX], Flow[MAX][MAX];
vector<int> Line[MAX];

void AddLine(int From, int To, int Amount) {
    Line[From].push_back(To), Line[To].push_back(From);
    Capacity[From][To] = Amount;
}

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
    int N, M, K, A, B, Amount, KeyNum;
    scanf("%d %d", &M, &N);
    int Sour = N+M+1, Sink = N+M+2;
    for(int i=N+1; i<=N+M; i++) {
        scanf("%d", &Amount);
        AddLine(i, Sink, Amount);
    }
    vector<int> KeyList[MAX];
    for(int i=1; i<=N; i++) {
        scanf("%d", &K);
        for(int j=0; j<K; j++) {
            scanf("%d", &KeyNum);
            AddLine(i, N+KeyNum, INF);
            KeyList[KeyNum].push_back(i);
        }
        scanf("%d", &Amount);
        AddLine(Sour, i, Amount);
    }
    for(int i=1; i<=M; i++) {
        if(!KeyList[i].size()) continue;
        for(int j=0; j<KeyList[i].size()-1; j++) {
            int Curr = KeyList[i][j];
            for(int k=j+1; k<KeyList[i].size(); k++) {
                int Next = KeyList[i][k];
                AddLine(Next, Curr, INF);
            }
        }
    }
    printf("%d", MaxFlow(Sour, Sink));
}
