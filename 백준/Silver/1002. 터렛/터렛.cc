#include<stdio.h>

int main() {
    int T, x1, y1, r1, x2, y2, r2, disSquare, radiusDiffSquare, radiusSumSquare;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        disSquare = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        radiusDiffSquare = (r1-r2)*(r1-r2);
        radiusSumSquare = (r1+r2)*(r1+r2);
        if(x1 == x2 && y1 == y2 && r1 == r2) printf("-1\n");
        else if(radiusDiffSquare < disSquare && disSquare < radiusSumSquare) printf("2\n");
        else if(radiusSumSquare == disSquare || radiusDiffSquare == disSquare) printf("1\n");
        else if(disSquare > radiusSumSquare || disSquare < radiusDiffSquare) printf("0\n");
    }
}
