#include <stdio.h>
#include <string.h>

int main() {
    char word[105];
    scanf("%s", word);
    for(int i=0; i<strlen(word); i++)
        if(word[i] != 'C' && word[i] != 'A' && word[i] != 'M' && word[i] != 'B' && word[i] != 'R' && word[i] != 'I' && word[i] != 'D' && word[i] != 'G' && word[i] != 'E')
            printf("%c", word[i]);
}
