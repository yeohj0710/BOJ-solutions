#include <cstdio>
#include <vector>
#include <queue>
#define MAX 505
using namespace std;

int Degree[MAX], Time[MAX], Sum[MAX];
vector<int> Node[MAX];
queue<int> Queue;

int main() {
    int N, X, Pop, Next;
    scanf("%d", &N);
    for(int i=1; i<=N; i++) {
        scanf("%d", &Time[i]);
        while(1) {
            scanf("%d", &X);
            if(X == -1) break;
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
    for(int i=1; i<=N; i++) printf("%d\n", Sum[i]);
}
