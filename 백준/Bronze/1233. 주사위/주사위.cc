#include<stdio.h>

int main() {
    int s1, s2, s3, sum[100] = {0, }, max = 0, ans;
    scanf("%d %d %d", &s1, &s2, &s3);
    for(int i=1; i<=s1; i++)
        for(int j=1; j<=s2; j++)
            for(int k=1; k<=s3; k++) sum[i+j+k]++;
    for(int i=3; i<=s1+s2+s3; i++)
        if(sum[i] > max) {
            max = sum[i];
            ans = i;
        }
    printf("%d", ans);
}
