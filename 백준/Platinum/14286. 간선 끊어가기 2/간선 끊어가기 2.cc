#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 505
#define INF 1000000000
using namespace std;

int Capacity[MAX][MAX], Flow[MAX][MAX];
vector<int> Line[MAX];

void AddLine(int From, int To, int Cap) {
    Line[From].push_back(To), Line[To].push_back(From);
    Capacity[From][To] = Capacity[To][From] = Cap;
}

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
    int N, M, From, To, Cap, Sour, Sink;
    scanf("%d %d", &N, &M);
    for(int i=0; i<M; i++) {
        scanf("%d %d %d", &From, &To, &Cap);
        AddLine(From, To, Cap);
    }
    scanf("%d %d", &Sour, &Sink);
    printf("%d", MaxFlow(Sour, Sink));
}
