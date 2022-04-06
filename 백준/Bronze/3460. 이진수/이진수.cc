#include<stdio.h>

int main() {
    int T, n, count;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d", &n);
        count = 0;
        while(n) {
            if(n%2) printf("%d ", count++);
            else count++;
            n /= 2;
        }
        printf("\n");
    }
}
