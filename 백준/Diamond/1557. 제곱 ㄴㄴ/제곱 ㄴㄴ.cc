#include<stdio.h>
#define INT_MAX 2147483647
#define SQRT_INT_MAX 46340

long long int sieve[50000] = {0, }, sq[50000];
long long int K, order, check, count = 0, low, mid, high, key;

int order_of_K(int K) {
    order = K;
    for(int i=0; i<count; i++) {
        order -= K/sq[i];
        for(int j=i+1; j<count && sq[i]*sq[j]<=INT_MAX; j++) {
            order += K/(sq[i]*sq[j]);
            for(int k=j+1; k<count && sq[i]*sq[j]*sq[k]<=INT_MAX; k++) {
                order -= K/(sq[i]*sq[j]*sq[k]);
                for(int l=k+1; l<count && sq[i]*sq[j]*sq[k]*sq[l]<=INT_MAX; l++) {
                    order += K/(sq[i]*sq[j]*sq[k]*sq[l]);
                    for(int m=l+1; m<count && sq[i]*sq[j]*sq[k]*sq[l]*sq[m]<=INT_MAX; m++) {
                        order -= K/(sq[i]*sq[j]*sq[k]*sq[l]*sq[m]);
                        for(int n=m+1; n<count && sq[i]*sq[j]*sq[k]*sq[l]*sq[m]*sq[n]<=INT_MAX; n++) {
                            order += K/(sq[i]*sq[j]*sq[k]*sq[l]*sq[m]*sq[n]);
                        }
                    }
                }
            }
        }
    }
    return order;
}

int main() {
    scanf("%d", &K);
    for(int i=2; i*i<=SQRT_INT_MAX; i++)
        for(int j=2; i*j<=SQRT_INT_MAX; j++) sieve[i*j] = 1;
    for(int i=2; i<=SQRT_INT_MAX; i++) if(!sieve[i]) sq[count++] = i*i;
    low = K, high = 2*K;
    while(low <= high) {
        mid = (low + high)/2;
        key = order_of_K(mid);
        if(key == K) {
            while(order_of_K(--mid) == K) ;
            printf("%d", ++mid);
            return 0;
        }
        else if(key < K) low = mid + 1;
        else if(key > K) high = mid - 1;
    }
}
