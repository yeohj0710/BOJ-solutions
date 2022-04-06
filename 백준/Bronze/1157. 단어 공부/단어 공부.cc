#include<stdio.h>

int main() {
    int freq[26] = {0, }, max = 0, check = 0;
    char c, ans;
    while(scanf("%c", &c) != EOF) {
        if(c >= 'a' && c <= 'z') freq[c - 'a']++;
        else if(c >= 'A' && c <= 'Z') freq[c - 'A']++;
    }
    for(int i=0; i<26; i++) if(freq[i] > max) max = freq[i];
    for(int i=0; i<26; i++) if(freq[i] == max) {
        ans = 'A' + i;
        check++;
    }
    if(check > 1) printf("?");
    else printf("%c", ans);
}
