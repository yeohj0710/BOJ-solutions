#include <stdio.h>
#include <string.h>

int LCS[1005][1005];
int max(int a, int b) { return a>b?a:b; }

int main() {
    char str1[1005], str2[1005];
    scanf("%s %s", str1, str2);
    for(int i=1; i<=strlen(str1); i++)
        for(int j=1; j<=strlen(str2); j++) {
            if(str1[i-1] == str2[j-1]) LCS[i][j] = LCS[i-1][j-1]+1;
            else LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
        }
    printf("%d", LCS[strlen(str1)][strlen(str2)]);
}
