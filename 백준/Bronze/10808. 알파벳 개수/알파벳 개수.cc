#include <stdio.h>
#include <string.h>

int main() {
    int cnt[26] = {0, };
    char word[105];
    scanf("%s", word);
    for(int i=0; i<strlen(word); i++) cnt[word[i]-'a']++;
    for(int i=0; i<26; i++) printf("%d ", cnt[i]);
}
