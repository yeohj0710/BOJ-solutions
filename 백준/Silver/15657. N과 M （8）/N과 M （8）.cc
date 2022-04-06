#include <stdio.h>

int arr[10], check[10] = {0, }, print_arr[10], n, m, temp;

void recursion(int count, int index) {
    if(!count) {
        for(int i=0; i<m; i++) printf("%d ", print_arr[i]);
        printf("\n");
        return;
    }
    for(int i=index; i<n; i++) {
        print_arr[m-count] = arr[i];
        recursion(count-1, i);
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
    recursion(m, 0);
}
