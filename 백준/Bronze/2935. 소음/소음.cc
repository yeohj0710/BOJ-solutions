#include<stdio.h>
#include<string.h>

int main() {
    char a[105], b[105], op;
    int a_one, b_one, max, min;
    scanf("%s\n%c\n%s", a, &op, b);
    if(strlen(a) > strlen(b)) max = strlen(a), min = strlen(b);
    else max = strlen(b), min = strlen(a);
    if(op == '+') {
        for(int i=max; i>0; i--) {
            if(i == max && i == min) printf("2");
            else if(i == max || i == min) printf("1");
            else printf("0");
        }
    }
    else if(op == '*') {
        for(int i=0; i<max+min-1; i++) {
            if(i == 0) printf("1");
            else printf("0");
        }
    }
}
