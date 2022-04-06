#include<stdio.h>
#include<string.h>

int main() {
    char n[100];
    int check;
    while(1) {
        scanf("%s", n);
        if(!strcmp(n, "0")) return 0;
        check = 1;
        for(int i=0; i<strlen(n)/2; i++) if(n[i] != n[strlen(n)-1-i]) check = 0;
        if(check) printf("yes\n");
        else printf("no\n");
    }
}
