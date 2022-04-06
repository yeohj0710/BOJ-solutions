#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int h1, m1, h2, m2;
        scanf("%02d:%02d %02d:%02d", &h1, &m1, &h2, &m2);
        if(!h1 && !m1 && !h2 && !m2) break;

        int sum = h1*60 + m1 + h2*60 + m2;
        int day = sum / (24*60);
        sum = sum % (24*60);

        printf("%02d:%02d", sum/60, sum%60);
        if(day > 0) printf(" +%d", day);
        printf("\n");
    }
}
