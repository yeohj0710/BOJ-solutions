#include <stdio.h>

int arr[10], check[10] = {0, }, print_arr[10], n, m, temp;

void recursion(int count) {
    if(!count) {
        for(int i=0; i<m; i++) printf("%d ", print_arr[i]);
        printf("\n");
    }
    for(int i=0; i<n; i++) {
        if(!check[i]) {
            check[i] = 1;
            print_arr[m-count] = arr[i];
            recursion(count-1);
            check[i] = 0;
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    recursion(m);
}
