#include<stdio.h>

int main() {
    int j, sum, check[10005] = {0, };
    for(int i=1; i<=10000; i++) {
        sum = i;
        j = i;
        while(j) {
            sum += j%10;
            j /= 10;
        }
        if(sum <= 10000) check[sum] = 1;
    }
    for(int i=1; i<=10000; i++) if(!check[i]) printf("%d\n", i);
}
