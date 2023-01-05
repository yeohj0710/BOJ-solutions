#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 100
#define INF 1000000000
using namespace std;

int Capacity[MAX][MAX], Flow[MAX][MAX], Sum = 0;
vector<int> Line[MAX];

int CtoI(char C) {
    if(C >= 'A' && C <= 'Z') return C-'A'+1;
    else if(C >= 'a' && C <= 'z') return C-'a'+27;
}

int MaxFlow(int Sour, int Sink) {
    while(1) {
        int Prev[MAX] = {};
        queue<int> Queue;
        Queue.push(Sour);
        while(!Queue.empty() && !Prev[Sink]) {
            int Cur = Queue.front();
            Queue.pop();
            for(int i=0; i<Line[Cur].size(); i++) {
                int Next = Line[Cur][i];
                if(Capacity[Cur][Next] - Flow[Cur][Next] > 0 && !Prev[Next]) {
                    Queue.push(Next);
                    Prev[Next] = Cur;
                    if(Next == Sink) break;
                }
            }
        }
        if(!Prev[Sink]) break;

        int Amount = INF;
        for(int i=Sink; i!=Sour; i=Prev[i])
            Amount = min(Amount, Capacity[Prev[i]][i] - Flow[Prev[i]][i]);
        for(int i=Sink; i!=Sour; i=Prev[i]) {
            Flow[Prev[i]][i] += Amount;
            Flow[i][Prev[i]] -= Amount;
        }
        Sum += Amount;
    }
    return Sum;
}

int main() {
    int N;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        char Sour, Sink; int Value;
        scanf(" %c %c %d", &Sour, &Sink, &Value);
        int A = CtoI(Sour), B = CtoI(Sink);
        Line[A].push_back(B);
        Line[B].push_back(A);
        Capacity[A][B] += Value;
        Capacity[B][A] += Value;
    }
    printf("%d", MaxFlow(CtoI('A'), CtoI('Z')));
}
