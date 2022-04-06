#include <stdio.h>
#include <string.h>

int Min(int x, int y) { return x<y?x:y; }

int main() {
    char a[1005], b[1005];
    int cnt1[26] = {0, }, cnt2[26] = {0, }, min_sum = 0;
    scanf("%s %s", a, b);
    for(int i=0; i<strlen(a); i++) cnt1[a[i]-'a']++;
    for(int i=0; i<strlen(b); i++) cnt2[b[i]-'a']++;
    for(int i=0; i<26; i++) min_sum += Min(cnt1[i], cnt2[i]);
    printf("%d", strlen(a)+strlen(b)-min_sum*2);
}
