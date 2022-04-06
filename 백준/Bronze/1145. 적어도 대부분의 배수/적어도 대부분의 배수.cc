#include<stdio.h>
int main() {
    int n[6], ans = 1, check;
    for(int i=0; i<5; i++) scanf("%d", &n[i]);
    while(1) {
        check = 0;
        for(int i=0; i<5; i++) if(ans%n[i] == 0) check++;
        if(check >= 3) break;
        ans++;
    }
    printf("%d", ans);
}
