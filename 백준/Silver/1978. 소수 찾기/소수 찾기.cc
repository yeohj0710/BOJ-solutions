#include<stdio.h>

int main() {
    int N, digit, check, sum = 0;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%d", &digit);
        check = 0;
        for(int j=2; j<digit; j++) {
            if(!(digit%j)) check = 1;
        }
        if(!check && digit >= 2) sum++;
    }
    printf("%d", sum);
}
