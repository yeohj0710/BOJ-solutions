#include<stdio.h>

int main() {
    char c;
    int freq[26] = {0, }, max = 0;
    while(scanf("%c", &c) != EOF) if(c >= 'a' && c <= 'z') freq[c - 'a']++;
    for(int i=0; i<26; i++) if(freq[i] > max) max = freq[i];
    for(int i=0; i<26; i++) if(freq[i] == max) printf("%c", 'a' + i);
}
