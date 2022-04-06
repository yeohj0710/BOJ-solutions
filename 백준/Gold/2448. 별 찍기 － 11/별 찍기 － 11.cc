#include<stdio.h>

int main() {
    int n, prev_line[10000] = {0, }, cur_line[10000] = {0, };
    scanf("%d", &n);
    for(int i=1; i<n; i++) printf(" ");
    printf("*");
    for(int i=1; i<=n; i++) printf(" ");
    printf("\n");
    prev_line[n] = 1;
    for(int i=2; i<=n; i++) {
        if(i%3 == 1) {
            for(int j=2; j<2*n; j++) {
                if(!prev_line[j-1] && !prev_line[j] && prev_line[j+1]) cur_line[j] = 1;
                if(prev_line[j-1] && !prev_line[j] && !prev_line[j+1]) cur_line[j] = 1;
            }
        }
        else if(i%3 == 2) {
            for(int j=2; j<2*n; j++)
                if(prev_line[j]) cur_line[j-1] = 1, cur_line[j+1] = 1;
        }
        else if(i%3 == 0) {
            for(int j=1; j<=2*n; j++)
                if(prev_line[j] && j-1 > 0 && j+1 < 2*n) cur_line[j-1] = 1, cur_line[j] = 1, cur_line[j+1] = 1;
        }
        for(int j=1; j<=2*n; j++) {
            if(cur_line[j]) printf("*");
            else printf(" ");
        }
        printf("\n");
        for(int j=1; j<=2*n; j++) {
            prev_line[j] = cur_line[j];
            cur_line[j] = 0;
        }
    }
}
