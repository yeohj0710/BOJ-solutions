#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#define MAX 1000
using namespace std;

int N;
vector<int> Graph[MAX+1];
vector<bool> Visit;

void DFS(int V) {
    Visit[V] = true;
    printf("%d ", V);
    for(int i=0; i<Graph[V].size(); i++) {
        int Next = Graph[V][i];
        if(!Visit[Next]) DFS(Next);
    }
}

void BFS(int V) {
    Visit[V] = true;
    queue<int> Queue;
    Queue.push(V);
    while(!Queue.empty()) {
        int Pop = Queue.front();
        printf("%d ", Pop);
        Queue.pop();
        for(int i=0; i<Graph[Pop].size(); i++) {
            int Next = Graph[Pop][i];
            if(!Visit[Next]) {
                Visit[Next] = true;
                Queue.push(Next);
            }
        }
    }
}

int main() {
    int M, Begin, X, Y;
    scanf("%d %d %d", &N, &M, &Begin);
    Visit.resize(N+1);
    for(int i=0; i<M; i++) {
        scanf("%d %d", &X, &Y);
        Graph[X].push_back(Y);
        Graph[Y].push_back(X);
    }
    for(int i=1; i<=N; i++) sort(Graph[i].begin(), Graph[i].end());
    DFS(Begin); printf("\n");
    fill(Visit.begin(), Visit.end(), false);
    BFS(Begin);
}
