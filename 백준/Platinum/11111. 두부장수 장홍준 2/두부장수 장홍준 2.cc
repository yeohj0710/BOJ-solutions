#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 2505
#define INF 1000000000
using namespace std;

int N, M, Sour = 2501, Sink = 2502;
int Capacity[MAX][MAX] = {}, Flow[MAX][MAX] = {}, SinCost[MAX][MAX] = {};
vector<int> Line[MAX];

char Map[51][51];
int MapToCost[6][6] = {{10, 8, 7, 5, 0, 1}, {8, 6, 4, 3, 0, 1}, {7, 4, 3, 2, 0, 1}, {5, 3, 2, 2, 0, 1}, {0, 0, 0, 0, 0, 0}, {1, 1, 1, 1, 0, 0}};

void AddLine(int From, int To) {
    Line[From].push_back(To), Line[To].push_back(From);
    Capacity[From][To] = 1;
    int Cost;
    if(From <= 2500 && To <= 2500) Cost = -MapToCost[Map[(From-1)/M+1][(From-1)%M+1]-'A'][Map[(To-1)/M+1][(To-1)%M+1]-'A'];
    else Cost = 0;
    SinCost[From][To] = Cost, SinCost[To][From] = -Cost;
}

int MCMF() {
    int CostSum = 0;
    while(true) {
        bool isInQueue[MAX] = {};
        int Parent[MAX] = {};
        int Cost[MAX];
        fill(Cost, Cost+MAX, INF);
        Cost[Sour] = 0;

        queue<int> Queue;
        Queue.push(Sour);
        isInQueue[Sour] = true;

        while(!Queue.empty()) {
            int Curr = Queue.front();
            Queue.pop();
            isInQueue[Curr] = false;
            for(int i=0; i<Line[Curr].size(); i++) {
                int Next = Line[Curr][i];
                if(Capacity[Curr][Next] - Flow[Curr][Next] > 0
                   && Cost[Curr] + SinCost[Curr][Next] < Cost[Next]) {
                    Cost[Next] = Cost[Curr] + SinCost[Curr][Next];
                    Parent[Next] = Curr;
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
            CostSum += Amount*SinCost[Parent[i]][i];
            Flow[Parent[i]][i] += Amount;
            Flow[i][Parent[i]] -= Amount;
        }
    }
    return CostSum;
}

int main() {
    scanf("%d %d\n", &N, &M);
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) Map[i][j] = getchar();
        getchar();
    }
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) {
            int Node = (i-1)*M+j;
            if((i+j)%2 == 0) {
                AddLine(Sour, Node);
                if(i > 1) AddLine(Node, Node-M);
                if(i < N) AddLine(Node, Node+M);
                if(j > 1) AddLine(Node, Node-1);
                if(j < M) AddLine(Node, Node+1);
            }
            AddLine(Node, Sink);
        }
    printf("%d", -MCMF());
}
