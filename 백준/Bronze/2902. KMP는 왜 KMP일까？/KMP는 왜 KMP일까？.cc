#include <stdio.h>
#include <string.h>

int main() {
    char word[105];
    scanf("%s", word);
    for(int i=0; i<strlen(word); i++)
        if(word[i] >= 'A' && word[i] <= 'Z') printf("%c", word[i]);
}
