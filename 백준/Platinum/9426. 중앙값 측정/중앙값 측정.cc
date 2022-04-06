#include <cstdio>
#include <vector>
#include <queue>
#define MAX 65536
using namespace std;

vector<int> Tree;
queue<int> Queue;

void updateTree(int Node, int Begin, int End, int Value, int Var) {
    if(Value < Begin || Value > End) return;
    Tree[Node] += Var;
    if(Begin < End) {
        int Mid = (Begin + End)/2;
        updateTree(Node*2, Begin, Mid, Value, Var);
        updateTree(Node*2+1, Mid+1, End, Value, Var);
    }
}

int findMid(int Node, int Begin, int End, int Ranking) {
    if(Begin == End) return Begin;
    int Mid = (Begin + End)/2;
    if(Tree[Node*2] >= Ranking) return findMid(Node*2, Begin, Mid, Ranking);
    else return findMid(Node*2+1, Mid+1, End, Ranking-Tree[Node*2]);
}

int main() {
    int N, K, Value;
    long long Sum = 0;
    scanf("%d %d", &N, &K);
    Tree.resize(MAX*4+1);
    for(int i=1; i<=K; i++) {
        scanf("%d", &Value);
        updateTree(1, 0, MAX-1, Value, 1);
        Queue.push(Value);
    }
    Sum += (long long)findMid(1, 0, MAX-1, (K+1)/2);
    for(int i=K+1; i<=N; i++) {
        updateTree(1, 0, MAX-1, Queue.front(), -1);
        Queue.pop();
        scanf("%d", &Value);
        updateTree(1, 0, MAX-1, Value, 1);
        Queue.push(Value);
        Sum += (long long)findMid(1, 0, MAX-1, (K+1)/2);
    }
    printf("%lld", Sum);
}
