#include<stdio.h>
#include<string.h>

int main() {
    int digit, max = 0, max_i, max_j;
    for(int i=1; i<=9; i++)
        for(int j=1; j<=9; j++) {
            scanf("%d", &digit);
            if(digit > max) {
                max = digit;
                max_i = i;
                max_j = j;
            }
        }
    printf("%d\n%d %d", max, max_i, max_j);
}
