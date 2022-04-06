#include<stdio.h>

int main() {
    int p1, p2, e1, e2;
    scanf("%d %d\n%d %d", &p1, &e1, &e2, &p2);
    if(p1+p2 > e1+e2) printf("Persepolis");
    else if(p1+p2 < e1+e2) printf("Esteghlal");
    else {
        if(p1 > e2) printf("Esteghlal");
        else if(p1 < e2) printf("Persepolis");
        else printf("Penalty");
    }
}
