#include<stdio.h>

int main() {
    int a[4], temp;
    for(int i=0; i<4; i++) scanf("%d", &a[i]);
    for(int i=0; i<4; i++)
        for(int j=i+1; j<4; j++)
        if(a[i] > a[j]) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    printf("%d", a[2]*a[0]);
}
