#include<stdio.h>

int main() {
    int N, m, M, T, R, beat, i = 0, time = 0;
    scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);
    if(m+T > M) {
        printf("-1");
        return 0;
    }
    beat = m;
    while(i < N) {
        if(beat+T <= M) {
            beat += T;
            i++;
        }
        else {
            if(beat-R < m) beat = m;
            else beat -= R;
        }
        time++;
    }
    printf("%d", time);
}
