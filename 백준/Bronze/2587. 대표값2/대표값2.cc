#include <stdio.h>

int main() {
    int a[5], temp, avg = 0;
    for(int i=0; i<5; i++) scanf("%d", &a[i]), avg += a[i];
    for(int i=0; i<5; i++)
        for(int j=i+1; j<5; j++)
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    printf("%d\n%d", avg/5, a[2]);
}
