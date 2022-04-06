#include <stdio.h>
#include <string.h>

int main() {
    int cnt = 0;
    char word[105];
    scanf("%s", word);
    for(int i=0; i<strlen(word); i++)
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') cnt++;
    printf("%d", cnt);
}
