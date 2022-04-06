#include<stdio.h>

int main() {
    int sum, a;
    scanf("%d", &sum);
    for(int i=0; i<9; i++) {
        scanf("%d", &a);
        sum -= a;
    }
    printf("%d", sum);
}
