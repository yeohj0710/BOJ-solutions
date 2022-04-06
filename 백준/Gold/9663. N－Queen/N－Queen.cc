#include<stdio.h>

int N, count = 0, queen[20], check;
int abs(int a) { return a>=0?a:-a; }

void search(int num) {
    if(num == N+1) count++;
    for(int i=1; i<=N; i++) {
        queen[num] = i;
        check = 1;
        for(int j=1; j<num; j++) if(i == queen[j] || abs(i-queen[j]) == num-j) check = 0;
        if(check) search(num+1);
    }
}

int main() {
    scanf("%d", &N);
    search(1);
    printf("%d", count);
}
