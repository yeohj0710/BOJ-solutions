#include<stdio.h>

int main() {
    int count = 0;
    char c;
    for(int i=0; i<6; i++) {
        scanf("%c\n", &c);
        if(c == 'W') count++;
    }
    if(count == 5 || count == 6) printf("1");
    else if(count == 3 || count == 4) printf("2");
    else if(count == 1 || count == 2) printf("3");
    else printf("-1");
}
