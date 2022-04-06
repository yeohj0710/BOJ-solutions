#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 205
#define INF 1000000000
using namespace std;

int Sour, Sink, Penguin;
int Capacity[MAX][MAX], Flow[MAX][MAX];
vector<int> Line[MAX];

int MaxFlow() {
    int FlowSum = 0;
    while(true) {
        int Prev[MAX];
        fill(Prev, Prev+MAX, -1);
        queue<int> Queue;
        Queue.push(Sour);
        while(!Queue.empty()) {
            int Curr = Queue.front();
            Queue.pop();
            for(int i=0; i<Line[Curr].size(); i++) {
                int Next = Line[Curr][i];
                if(Capacity[Curr][Next] - Flow[Curr][Next] > 0 && Prev[Next] == -1) {
                    Queue.push(Next);
                    Prev[Next] = Curr;
                }
            }
        }
        if(Prev[Sink] == -1) break;

        int Amount = INF;
        for(int i=Sink; i!=Sour; i=Prev[i])
            Amount = min(Amount, Capacity[Prev[i]][i] - Flow[Prev[i]][i]);
        for(int i=Sink; i!=Sour; i=Prev[i]) {
            Flow[Prev[i]][i] += Amount;
            Flow[i][Prev[i]] -= Amount;
        }
        FlowSum += Amount;
    }
    return FlowSum;
}

int main() {
    int T, N, Check;
    double D;
    scanf("%d", &T);
    for(int t=0; t<T; t++) {
        fill(&Capacity[0][0], &Capacity[MAX-1][MAX], 0);
        fill(&Flow[0][0], &Flow[MAX-1][MAX], 0);
        for(int i=0; i<MAX; i++) vector<int>().swap(Line[i]);
        scanf("%d %lf", &N, &D);
        Sour = 2*N, Sink = 2*N+1, Penguin = 0, Check = 0;
        int x[MAX], y[MAX], n, m;
        for(int i=0; i<N; i++) {
            scanf("%d %d %d %d", &x[i], &y[i], &n, &m);
            for(int j=0; j<i; j++) {
                if((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]) <= D*D) {
                    Line[i].push_back(j+N), Line[j+N].push_back(i);
                    Line[j].push_back(i+N), Line[i+N].push_back(j);
                    Capacity[i+N][j] = Capacity[j+N][i] = INF;
                }
            }
            if(n > 0) {
                Line[Sour].push_back(i), Line[i].push_back(Sour);
                Capacity[Sour][i] = n;
                Penguin += n;
            }
            Line[i].push_back(i+N), Line[i+N].push_back(i);
            Capacity[i][i+N] = m;
        }
        for(int i=0; i<N; i++) {
            fill(&Flow[0][0], &Flow[MAX-1][MAX], 0);
            Line[i].push_back(Sink), Line[Sink].push_back(i);
            Capacity[i][Sink] = INF;
            if(MaxFlow() == Penguin) {
                printf("%d ", i);
                Check = 1;
            }
            Line[i].pop_back(), Line[Sink].pop_back();
            Capacity[i][Sink] = 0;
        }
        if(!Check) printf("-1");
        printf("\n");
    }
}
