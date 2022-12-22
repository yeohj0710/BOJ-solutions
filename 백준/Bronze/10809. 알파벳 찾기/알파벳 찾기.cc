#include<stdio.h>
#include<string.h>

int main() {
    char word[105], spot[26], check[26] = {0, };
    for(int i=0; i<26; i++) spot[i] = -1;
    scanf("%s", word);
    for(int i=0; i<strlen(word); i++)
        if(!check[word[i]-'a']) {
            spot[word[i]-'a'] = i;
            check[word[i]-'a'] = 1;
        }
    for(int i=0; i<26; i++) printf("%d ", spot[i]);
}
