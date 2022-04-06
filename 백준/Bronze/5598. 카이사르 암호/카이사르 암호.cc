#include <stdio.h>
#include <string.h>

int main() {
    char word[1005];
    scanf("%s", word);
    for(int i=0; i<strlen(word); i++) {
        if(word[i] >= 'D' && word[i] <= 'Z') printf("%c", word[i]-3);
        else if(word[i] >= 'A' && word[i] <= 'C') printf("%c", word[i]+23);
    }
}
