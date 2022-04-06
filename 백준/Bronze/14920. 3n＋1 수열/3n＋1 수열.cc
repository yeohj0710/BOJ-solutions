#include <cstdio>
using namespace std;

int main() {
    int N, cnt = 1;
    scanf("%d", &N);
    while(1) {
        if(N == 1) break;
        if(N%2 == 0) N /= 2;
        else N = 3*N+1;
        cnt++;
    }
    printf("%d", cnt);
}
