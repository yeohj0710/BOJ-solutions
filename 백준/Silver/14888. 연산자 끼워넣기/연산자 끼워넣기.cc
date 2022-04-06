#include<stdio.h>

int N, A[105], op[4], max = -1000000000, min = 1000000000;

void operation(int value, int times) {
    if(times == N-1) {
        if(value > max) max = value;
        if(value < min) min = value;
        return;
    }
    for(int i=0; i<4; i++) {
        if(op[i] > 0) {
            op[i]--;
            if(i == 0) operation(value + A[times+1], times+1);
            if(i == 1) operation(value - A[times+1], times+1);
            if(i == 2) operation(value * A[times+1], times+1);
            if(i == 3) operation(value / A[times+1], times+1);
            op[i]++;
        }
    }
}

int main() {
    scanf("%d", &N);
    for(int i=0; i<N; i++) scanf("%d", &A[i]);
    for(int i=0; i<4; i++) scanf("%d", &op[i]);
    operation(A[0], 0);
    printf("%d\n%d", max, min);
}
