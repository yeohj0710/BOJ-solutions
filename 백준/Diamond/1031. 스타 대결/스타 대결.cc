#include <bits/stdc++.h>
#define MAX 105
#define INF 1e9
using namespace std;

vector<int> Line[MAX];
int Capacity[MAX][MAX], Flow[MAX][MAX];

void AddEdge(int From, int To, int Amount) {
    Line[From].push_back(To), Line[To].push_back(From);
    Capacity[From][To] = Amount;
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

        for(int i=Sink; i!=Sour; i=Parent[i])
            Flow[Parent[i]][i]++, Flow[i][Parent[i]]--;
        FlowSum++;
    }
    return FlowSum;
}

void ChangeFlow(int Sour, int Sink) {
    int Parent[MAX]; fill(Parent, Parent+MAX, -1);
    queue<int> Queue; Queue.push(Sour);

    while(!Queue.empty() && Parent[Sink] == -1) {
        int Curr = Queue.front(); Queue.pop();
        for(int i=0; i<Line[Curr].size(); i++) {
            int Next = Line[Curr][i];
            if(Curr < Sour || (Curr == Sour && Next < Sink)) continue;
            if(Capacity[Curr][Next] - Flow[Curr][Next] > 0 && Parent[Next] == -1) {
                Queue.push(Next);
                Parent[Next] = Curr;
            }
        }
    }
    if(Parent[Sink] == -1) return;

    Flow[Sour][Sink] = Flow[Sink][Sour] = 0;
    for(int i=Sink; i!=Sour; i=Parent[i])
        Flow[Parent[i]][i]++, Flow[i][Parent[i]]--;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M, Amount, FlowSum = 0, Sour = 101, Sink = 102;
    cin >> N >> M;
    for(int i=1; i<=N; i++) {
        cin >> Amount;
        AddEdge(Sour, i, Amount);
    }
    for(int i=1; i<=M; i++) {
        cin >> Amount;
        FlowSum += Amount;
        AddEdge(50+i, Sink, Amount);
    }
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) AddEdge(i, 50+j, 1);

    if(MaxFlow(Sour, Sink) != FlowSum) {
        cout << "-1";
        return 0;
    }

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) {
            if(Flow[i][50+j] != 1) continue;
            ChangeFlow(i, 50+j);
        }

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) cout << Flow[i][50+j];
        cout << "\n";
    }
}
