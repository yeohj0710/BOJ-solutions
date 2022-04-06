#include<stdio.h>
#include<string.h>

int main() {
    int n, count[26] = {0, }, check = 0;
    char name[30];
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%s", name);
        count[name[0] -'a']++;
    }
    for(int i=0; i<26; i++)
        if(count[i] >= 5) {
            check++;
            printf("%c", 'a'+i);
        }
    if(!check) printf("PREDAJA");
}
