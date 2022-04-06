#include<stdio.h>
#include<string.h>

int main() {
    char word[1005];
    scanf("%s", word);
    for(int i=0; i<strlen(word); i++) {
        if(i != 0 && i%10 == 0) printf("\n");
        printf("%c", word[i]);
    }
}
