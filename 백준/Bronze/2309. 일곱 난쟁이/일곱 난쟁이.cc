#include<stdio.h>

int main() {
    int arr[10], sum, temp;
    for(int i=0; i<9; i++) scanf("%d", &arr[i]);
    for(int i=0; i<9; i++)
        for(int j=i+1; j<9; j++)
        if(arr[i] > arr[j]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    for(int i=0; i<9; i++)
        for(int j=i+1; j<9; j++) {
            sum = 0;
            for(int k=0; k<9; k++)
                if(k!=i && k!=j) sum += arr[k];
            if(sum == 100) {
                for(int k=0; k<9; k++)
                    if(k!=i && k!=j) printf("%d\n", arr[k]);
                return 0;
            }
        }
}
