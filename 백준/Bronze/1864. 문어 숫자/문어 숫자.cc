#include<stdio.h>

int main() {
    char a;
    int n;
    while(1) {
        scanf("%c", &a);
        if(a == '#') return 0;
        else if(a == '-') n = 0;
        else if(a == '\\') n = 1;
        else if(a == '(') n = 2;
        else if(a == '@') n = 3;
        else if(a == '?') n = 4;
        else if(a == '>') n = 5;
        else if(a == '&') n = 6;
        else if(a == '%') n = 7;
        else if(a == '/') n = -1;
        while(1) {
            scanf("%c", &a);
            if(a == '\n' || a == '\0') {
                printf("%d\n", n);
                break;
            }
            n *= 8;
            if(a == '-') n += 0;
            else if(a == '\\') n += 1;
            else if(a == '(') n += 2;
            else if(a == '@') n += 3;
            else if(a == '?') n += 4;
            else if(a == '>') n += 5;
            else if(a == '&') n += 6;
            else if(a == '%') n += 7;
            else if(a == '/') n--;
        }
    }
}
