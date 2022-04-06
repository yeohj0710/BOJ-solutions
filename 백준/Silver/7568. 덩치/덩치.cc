#include<stdio.h>

int main() {
    int n, x[100], y[100], rank;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d %d", &x[i], &y[i]);
    for(int i=0; i<n; i++) {
        rank = 1;
        for(int j=0; j<n; j++)
            if(x[i] < x[j] && y[i] < y[j]) rank++;
        printf("%d ", rank);
    }
}
