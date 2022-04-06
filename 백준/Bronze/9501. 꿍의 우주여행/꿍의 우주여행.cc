#include <cstdio>
using namespace std;

int main() {
    int T, N, cnt;
    double D, a, b, c;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        cnt = 0;
        scanf("%d %lf", &N, &D);
        for(int j=0; j<N; j++) {
            scanf("%lf %lf %lf", &a, &b, &c);
            if(D/a * c <= b) cnt++;
        }
        printf("%d\n", cnt);
    }
}
