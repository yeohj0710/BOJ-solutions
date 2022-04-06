#include<stdio.h>
#include<math.h>

int main() {
    int X, ans, frag = 32;
    scanf("%d", &X);
    ans = X/64;
    X = X%64;
    while(frag) {
        ans += X/frag;
        X = X%frag;
        frag /= 2;
    }
    printf("%d", ans);
}
