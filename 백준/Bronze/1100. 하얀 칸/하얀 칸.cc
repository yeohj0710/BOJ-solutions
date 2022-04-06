#include<stdio.h>
int main() {
    int n = 0;
    char chess[10][10];
    for(int i=0; i<8; i++) scanf("%s", chess[i]);
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
            if((i+j)%2 == 0 && chess[i][j] == 'F') n++;
    printf("%d", n);
}
