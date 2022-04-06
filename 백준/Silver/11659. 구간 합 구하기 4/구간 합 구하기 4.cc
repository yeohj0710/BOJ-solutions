#include <iostream>
using namespace std;

int main() {
    int N, M, input, sum[100005] = {0, }, a, b;
    scanf("%d %d", &N, &M);
    for(int i=1; i<=N; i++) {
        scanf("%d", &input);
        sum[i] = sum[i-1] + input;
    }
    for(int i=1; i<=M; i++) {
        scanf("%d %d", &a, &b);;
        printf("%d\n", sum[b]-sum[a-1]);
    }
}
