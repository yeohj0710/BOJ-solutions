#include <cstdio>
using namespace std;

int main() {
    int T, N, sum;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d", &N);
        sum = 0;
        for(int j=1; j<=N; j++) sum += j*(j+1)*(j+2)/2;
        printf("%d\n", sum);
    }
}
