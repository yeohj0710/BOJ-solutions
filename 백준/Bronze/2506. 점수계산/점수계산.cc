#include<stdio.h>

int main() {
    int n, each, score = 0, row = 1;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &each);
        if(each) score += row++;
        else row = 1;
    }
    printf("%d", score);
}
