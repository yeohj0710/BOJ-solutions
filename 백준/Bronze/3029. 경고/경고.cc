#include <cstdio>
using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2, sum1 = 0, sum2 = 0, ans;
    scanf("%02d:%02d:%02d\n%02d:%02d:%02d", &a1, &b1, &c1, &a2, &b2, &c2);
    sum1 = a1*60*60 + b1*60 + c1;
    sum2 = a2*60*60 + b2*60 + c2;
    if(sum1 == sum2) {
        printf("24:00:00");
        return 0;
    }
    else if(sum2 > sum1) ans = sum2 - sum1;
    else ans = sum2 + 24*60*60 - sum1;
    printf("%02d:%02d:%02d", ans/3600, (ans%3600)/60, ans%60);
}
