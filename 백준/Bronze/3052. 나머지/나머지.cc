#include<stdio.h>

int main() {
    int digit, remain[42] = {0, }, count = 0;
    for(int i=0; i<10; i++) {
        scanf("%d", &digit);
        remain[digit%42]++;
    }
    for(int i=0; i<42; i++) if(remain[i]) count++;
    printf("%d", count);
}
