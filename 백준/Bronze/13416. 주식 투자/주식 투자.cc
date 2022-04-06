#include <cstdio>
using namespace std;

int main() {
    int T, N, a, b, c, sum = 0, Max;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d", &N);
        sum = 0;
        for(int j=0; j<N; j++) {
            scanf("%d %d %d", &a, &b, &c);
            if(a < 0 && b < 0 && c < 0) continue;
            Max = 0;
            if(a > Max) Max = a;
            if(b > Max) Max = b;
            if(c > Max) Max = c;
            sum += Max;
        }
        printf("%d\n", sum);
    }
}
