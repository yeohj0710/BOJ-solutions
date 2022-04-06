#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int Max(int a, int b) { return a>b?a:b; }

int main() {
    int T, N, K, X, Y, W, pop, next, ans;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        int degree[1005] = {0, }, D[1005] = {0, }, sum[1005] = {0, };
        vector<int> node[1005];
        queue<int> Queue;
        scanf("%d %d", &N, &K);
        for(int j=1; j<=N; j++) scanf("%d", &D[j]);
        for(int j=0; j<K; j++) {
            scanf("%d %d", &X, &Y);
            node[X].push_back(Y);
            degree[Y]++;
        }
        scanf("%d", &W);
        for(int j=1; j<=N; j++)
            if(!degree[j]) {
                Queue.push(j);
                sum[j] = D[j];
            }
        while(!Queue.empty()) {
            pop = Queue.front();
            Queue.pop();
            for(int j=0; j<node[pop].size(); j++) {
                next = node[pop][j];
                if(sum[pop]+D[next] > sum[next]) sum[next] = sum[pop]+D[next];
                degree[next]--;
                if(!degree[node[pop][j]]) Queue.push(next);
            }
        }
        printf("%d\n", sum[W]);
    }
}
