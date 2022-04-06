#include <stdio.h>
#include <string.h>

int main() {
    int ans = 0, B, temp;
    char num[105];
    scanf("%s %d", num, &B);
    for(int i=strlen(num)-1; i>=0; i--) {
        if(num[i] >= '0' && num[i] <= '9') temp = num[i]-'0';
        else if(num[i] >= 'A' && num[i] <= 'Z') temp = num[i]-'A'+10;
        for(int j=1; j<=strlen(num)-1-i; j++) temp *= B;
        ans += temp;
    }
    printf("%d", ans);
}
