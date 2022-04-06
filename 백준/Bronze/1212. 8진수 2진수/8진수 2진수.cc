#include<stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if(c == '1') printf("1");
    else if(c == '2') printf("10");
    else if(c == '3') printf("11");
    else if(c == '4') printf("100");
    else if(c == '5') printf("101");
    else if(c == '6') printf("110");
    else if(c == '7') printf("111");
    else if(c == '0') {
        printf("0");
        return 0;
    }
    while(1) {
        scanf("%c", &c);
        if(c == '\n' || c == '\0') break;
        else if(c == '1') printf("001");
        else if(c == '2') printf("010");
        else if(c == '3') printf("011");
        else if(c == '4') printf("100");
        else if(c == '5') printf("101");
        else if(c == '6') printf("110");
        else if(c == '7') printf("111");
        else if(c == '0') printf("000");
    }
}
