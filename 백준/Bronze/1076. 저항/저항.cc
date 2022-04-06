#include<stdio.h>
#include<string.h>

int str_to_num(char str[]) {
    if(!strcmp(str, "black")) return 0;
    else if(!strcmp(str, "brown")) return 1;
    else if(!strcmp(str, "red")) return 2;
    else if(!strcmp(str, "orange")) return 3;
    else if(!strcmp(str, "yellow")) return 4;
    else if(!strcmp(str, "green")) return 5;
    else if(!strcmp(str, "blue")) return 6;
    else if(!strcmp(str, "violet")) return 7;
    else if(!strcmp(str, "grey")) return 8;
    else if(!strcmp(str, "white")) return 9;
}

int str_to_mul(char str[]) {
    if(!strcmp(str, "black")) return 1;
    else if(!strcmp(str, "brown")) return 10;
    else if(!strcmp(str, "red")) return 100;
    else if(!strcmp(str, "orange")) return 1000;
    else if(!strcmp(str, "yellow")) return 10000;
    else if(!strcmp(str, "green")) return 100000;
    else if(!strcmp(str, "blue")) return 1000000;
    else if(!strcmp(str, "violet")) return 10000000;
    else if(!strcmp(str, "grey")) return 100000000;
    else if(!strcmp(str, "white")) return 1000000000;
}

int main() {
    char a[10], b[10], c[10];
    scanf("%s\n%s\n%s", a, b, c);
    printf("%lld", (str_to_num(a)*10 + str_to_num(b))*(long long int)str_to_mul(c));

}
