#include <cstdio>
using namespace std;

int main() {
    int T, N, K, val, sum;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        sum = 0;
        scanf("%d %d", &N, &K);
        for(int j=0; j<N; j++) {
            scanf("%d", &val);
            sum += val/K;
        }
        printf("%d\n", sum);
    }
}
