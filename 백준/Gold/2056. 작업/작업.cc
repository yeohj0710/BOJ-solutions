#include <cstdio>
#include <vector>
#include <queue>
#define MAX 10005
using namespace std;

int Degree[MAX], Time[MAX], Sum[MAX];
vector<int> Node[MAX];
queue<int> Queue;

int main() {
    int N, M, X, Pop, Next, Max = 0;
    scanf("%d", &N);
    for(int i=1; i<=N; i++) {
        scanf("%d %d", &Time[i], &M);
        for(int j=0; j<M; j++) {
            scanf("%d", &X);
            Node[X].push_back(i);
            Degree[i]++;
        }
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
            if(Sum[Pop]+Time[Next] > Sum[Next]) Sum[Next] = Sum[Pop] + Time[Next];
            Degree[Next]--;
            if(!Degree[Next]) Queue.push(Next);
        }
    }
    for(int i=1; i<=N; i++)
        if(Sum[i] > Max) Max = Sum[i];
    printf("%d", Max);
}
