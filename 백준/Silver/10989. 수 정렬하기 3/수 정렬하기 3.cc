#include<stdio.h>

int main() {
    int n, record[10005] = {0, }, digit;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &digit);
        record[digit]++;
    }
    for(int i=1; i<=10000; i++)
        for(int j=1; j<=record[i]; j++) printf("%d\n", i);
}
