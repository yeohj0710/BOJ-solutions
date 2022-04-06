#include <stdio.h>

int main() {
    int a[10], sum;
    for(int i=0; i<9; i++) scanf("%d", &a[i]);
    for(int i=0; i<9; i++)
        for(int j=i+1; j<9; j++) {
            sum = 0;
            for(int k=0; k<9; k++)
                if(k!=i && k!=j) sum += a[k];
            if(sum == 100) {
                for(int k=0; k<9; k++)
                    if(k!=i && k!=j) printf("%d\n", a[k]);
            }
        }
}
