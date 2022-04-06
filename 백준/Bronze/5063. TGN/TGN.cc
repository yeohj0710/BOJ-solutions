#include<stdio.h>

int main() {
    int n, a, b, c;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if(b-c > a) printf("advertise\n");
        else if(b-c < a) printf("do not advertise\n");
        else printf("does not matter\n");
    }
}
