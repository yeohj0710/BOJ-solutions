#include<stdio.h>
#include<string.h>

int main() {
    int n, check, count = 0;
    char word[105], alphabet[26];
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        check = 0;
        for(int j=0; j<26; j++) alphabet[j] = 0;
        scanf("%s", word);
        for(int j=0; j<strlen(word); j++) {
            if(alphabet[word[j]-'a'] && (j>0 && word[j] != word[j-1])) check = 1;
            alphabet[word[j]-'a']++;
        }
        if(!check) count++;
    }
    printf("%d", count);
}
