#include <stdio.h>

int main() {
    int n, v, cnt[205] = {0, };
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &v);
        if(v >= 0  && v <= 100) cnt[v]++;
        else cnt[-v+100]++;
    }
    scanf("%d", &v);
    if(v >= 0 && v <= 100) printf("%d", cnt[v]);
    else printf("%d", cnt[-v+100]);
}
