#include<stdio.h>

int main() {
    int N, sum = 0;
    scanf("%d", &N);
    for(int i=1; i<=N; i++) {
        if(i<100) sum++;
        else if(i/100 - i%100/10 == i%100/10 - i%10) sum++;
    }
    printf("%d", sum);
}
