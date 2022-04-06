#include <bits/stdc++.h>
#define MAX 405
#define INF 1e9
using namespace std;

vector<int> Line[MAX];
int Capacity[MAX][MAX], Flow[MAX][MAX];

void AddEdge(int From, int To) {
    Line[From].push_back(To), Line[To].push_back(From);
    Capacity[From][To] = 1;
}

int MaxFlow(int Sour, int Sink) {
    int FlowSum = 0;
    while(true) {
        int Parent[MAX]; fill(Parent, Parent+MAX, -1);
        queue<int> Queue; Queue.push(Sour);

        while(!Queue.empty() && Parent[Sink] == -1) {
            int Curr = Queue.front(); Queue.pop();
            for(int i=0; i<Line[Curr].size(); i++) {
                int Next = Line[Curr][i];
                if(Capacity[Curr][Next] - Flow[Curr][Next] > 0 && Parent[Next] == -1) {
                    Queue.push(Next);
                    Parent[Next] = Curr;
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, F, D, Sour = 401, Sink = 402;
    cin >> N >> F >> D;

    for(int i=1; i<=F; i++) AddEdge(Sour, i);
    for(int i=1; i<=D; i++) AddEdge(300+i, Sink);
    for(int i=1; i<=N; i++) AddEdge(100+i, 200+i);

    for(int i=1; i<=N; i++) {
        int F_i, D_i, Node;
        cin >> F_i >> D_i;
        for(int j=0; j<F_i; j++) {
            cin >> Node;
            AddEdge(Node, 100+i);
        }
        for(int j=0; j<D_i; j++) {
            cin >> Node;
            AddEdge(200+i, 300+Node);
        }
    }

    cout << MaxFlow(Sour, Sink);
}
