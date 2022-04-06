#include <cstdio>
#include <vector>
#include <queue>
#define MAX 10005
using namespace std;

int Degree[MAX], Time[MAX];
long long Sum[MAX];
vector<int> Node[MAX];
queue<int> Queue;

int main() {
    int N, M, X, Y, Pop, Next;
    long long Max = 0;
    scanf("%d %d", &N, &M);
    for(int i=1; i<=N; i++) scanf("%d", &Time[i]);
    for(int i=1; i<=M; i++) {
        scanf("%d %d", &X, &Y);
        Node[X].push_back(Y);
        Degree[Y]++;
    }
    for(int i=1; i<=N; i++)
        if(!Degree[i]) {
            Queue.push(i);
            Sum[i] = Time[i];
        }
    while(!Queue.empty()) {
        Pop = Queue.front();
        Queue.pop();
        for(int i=0; i<Node[Pop].size(); i++) {
            Next = Node[Pop][i];
            if(Sum[Pop]+(long long)Time[Next] > Sum[Next])
                Sum[Next] = Sum[Pop] + (long long)Time[Next];
            Degree[Next]--;
            if(!Degree[Next]) Queue.push(Next);
        }
    }
    for(int i=1; i<=N; i++) if(Sum[i] > Max) Max = Sum[i];
    printf("%lld", Max);
}
