#include <cstdio>
using namespace std;

int main() {
    int T, A, B, N;
    scanf("%d", &T);
    for(int t=0; t<T; t++) {
        int Sum = 0;
        scanf("%d %d", &A, &B);
        N = A/B;
        for(int i=1; i<=N; i++) Sum += 2*i-1;
        printf("%d\n", Sum);
    }
}
