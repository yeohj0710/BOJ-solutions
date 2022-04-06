#include <cstdio>
#include <queue>
using namespace std;

int degree[1005] = {0, }, ans[1005], cnt = 0;
vector<int> node[1005];
queue<int> Queue;

int main() {
    int N, M, P, A, B, pop, next;
    scanf("%d %d", &N, &M);
    for(int i=0; i<M; i++) {
        scanf("%d %d", &P, &A);
        for(int j=0; j<P-1; j++) {
            scanf("%d", &B);
            node[A].push_back(B);
            degree[B]++;
            A = B;
        }
    }
    for(int i=1; i<=N; i++)
        if(!degree[i]) Queue.push(i);
    while(!Queue.empty()) {
        pop = Queue.front();
        ans[cnt++] = pop;
        Queue.pop();
        for(int i=0; i<node[pop].size(); i++) {
            next = node[pop][i];
            degree[next]--;
            if(!degree[next]) Queue.push(next);
        }
    }
    if(cnt != N) printf("0");
    else
        for(int i=0; i<cnt; i++) printf("%d\n", ans[i]);
}
