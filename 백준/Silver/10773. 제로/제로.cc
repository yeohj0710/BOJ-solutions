#include<stdio.h>

int main() {
    int N, arr[100005], digit, location = 0;
    long long int sum = 0;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%d", &digit);
        if(digit == 0 && location != 0) arr[--location] = 0;
        else if(digit != 0) arr[location++] = digit;
    }
    for(int i=0; i<location; i++) sum += arr[i];
    printf("%d", sum);
}
