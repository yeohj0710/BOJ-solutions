#include<stdio.h>

int main() {
    int N, count = 0, imp = 0;
    scanf("%d", &N);
    if(N < 3 || N == 4 || N == 7) {
        printf("-1");
        return 0;
    }
    count += N/15 * 3;
    N %= 15;
    if(N == 1 || N == 3 || N == 5) count++;
    else if(N == 2 || N == 4 || N == 6 || N == 8 || N == 10) count += 2;
    else if(N == 7 || N == 9 || N == 11 || N == 13) count += 3;
    else if(N == 12 || N == 14) count += 4;
    printf("%d", count);
}
