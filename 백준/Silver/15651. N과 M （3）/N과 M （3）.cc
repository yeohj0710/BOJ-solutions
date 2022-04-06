#include<stdio.h>

int n, m, check[10] = {0, }, arr[10];

void search(int idx) {
    if(idx <= 0) {
        for(int i=0; i<m; i++) printf("%d ", arr[i]);
        printf("\n");
        return;
    }
    for(int i=1; i<=n; i++) {
        check[i] = 1;
        arr[m-idx] = i;
        search(idx-1);
        check[i] = 0;
    }
}

int main() {
    scanf("%d %d", &n, &m);
    search(m);
}
