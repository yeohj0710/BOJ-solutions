#include <stdio.h>

int main() {
    int n, arr[105], mov;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        scanf("%d", &mov);
        for(int j=i; j>i-mov; j--) arr[j] = arr[j-1];
        arr[i-mov] = i;
    }
    for(int i=1; i<=n; i++) printf("%d ", arr[i]);
}
