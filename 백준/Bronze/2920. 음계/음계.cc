#include<stdio.h>

int main() {
    int arr[10], ascending = 1, descending = 1;
    for(int i=1; i<=8; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] != i) ascending = 0;
        if(arr[i] != 9-i) descending = 0;
    }
    if(ascending) printf("ascending");
    else if(descending) printf("descending");
    else printf("mixed");
}
