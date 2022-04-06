#include<stdio.h>
#include<string.h>

int main() {
    int n = 1;
    char str[1000001];
    scanf("%[^\n]s", str);
    for(int i=0; i<strlen(str); i++)
        if(str[i] == ' ') n++;
    if(str[0] == ' ' && n) n--;
    if(str[strlen(str)-1] == ' ' && n) n--;
    printf("%d", n);
}
