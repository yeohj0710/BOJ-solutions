#include<stdio.h>

int main() {
    int n, count;
    for(int i=0; i<3; i++) {
        count = 0;
        for(int j=0; j<4; j++) {
            scanf("%d", &n);
            if(n) count++;
        }
        if(count == 0) printf("D");
        else if(count == 1) printf("C");
        else if(count == 2) printf("B");
        else if(count == 3) printf("A");
        else if(count == 4) printf("E");
        printf("\n");
    }
}
