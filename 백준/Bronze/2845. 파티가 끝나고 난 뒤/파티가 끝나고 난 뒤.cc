#include<stdio.h>

int main() {
    int a, b, c, output[10];
    scanf("%d %d", &a, &b);
    for(int i=0; i<5; i++) {
        scanf("%d", &c);
        output[i] = c - a*b;
    }
    for(int i=0; i<5; i++) printf("%d ", output[i]);
}
