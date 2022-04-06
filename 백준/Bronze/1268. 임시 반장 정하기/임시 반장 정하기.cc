#include<stdio.h>

int main() {
    int n, classnum[1001][6], check[1001], score[1001] = {0, }, max = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        for(int j=0; j<5; j++) scanf("%d", &classnum[i][j]);
    for(int i=0; i<n; i++) {
        for(int k=0; k<n; k++) check[k] = 0;
        for(int j=0; j<5; j++)
            for(int k=0; k<n; k++) if(i != k && classnum[i][j] == classnum[k][j]) check[k] = 1;
        for(int k=0; k<n; k++) if(check[k]) score[i]++;
        if(score[i] > max) max = score[i];
    }
    for(int i=0; i<n; i++)
        if(score[i] == max) {
            printf("%d", i+1);
            return 0;
        }
}
