#include<stdio.h>

int n, m, check[10] = {0, }, arr[10], confirm;

void search(int idx) {
    if(idx <= 0) {
        confirm = 1;
        for(int i=1; i<m; i++) if(arr[i] <= arr[i-1]) confirm = 0;
        if(confirm) {
            for(int i=0; i<m; i++) printf("%d ", arr[i]);
            printf("\n");
        }
        return;
    }
    for(int i=1; i<=n; i++) {
        if(!check[i]) {
            check[i] = 1;
            arr[m-idx] = i;
            search(idx-1);
            check[i] = 0;
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    search(m);
}
