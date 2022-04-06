#include<stdio.h>

int main() {
    int n, arr[500][500], x, y, x_max, y_max;
    scanf("%d", &n);
    if(n == 1) {
        printf("*");
        return 0;
    }
    x_max = 4*n-3, y_max = 4*n-1;
    x = x_max, y = 1;
    while(1) {
        while(x > 0 && !arr[y][x]) arr[y][x--] = 1;
        if(x != 0) arr[y][++x] = 0;
        x++, y++;
        while(y <= y_max && !arr[y][x]) arr[y++][x] = 1;
        if(y <= y_max) arr[--y][x] = 0;
        y--, x++;
        if(y == 2*n+1 && x == 2*n) break;
        while(x <= x_max && !arr[y][x]) arr[y][x++] = 1;
        if(x <= x_max) arr[y][--x] = 0;
        x--, y--;
        while(y > 0 && !arr[y][x]) arr[y--][x] = 1;
        if(y != 0) arr[++y][x] = 0;
        y++, x--;
    }
    for(int i=1; i<=y_max; i++) {
        if(i == 2) printf("*");
        else
            for(int j=1; j<=x_max; j++) {
                if(arr[i][j]) printf("*");
                else printf(" ");
            }
        if(i != y_max) printf("\n");
    }
}
