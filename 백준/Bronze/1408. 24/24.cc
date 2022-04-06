#include <bits/stdc++.h>
using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2;
    scanf("%02d:%02d:%02d", &a1, &b1, &c1);
    scanf("%02d:%02d:%02d", &a2, &b2, &c2);

    int sum1 = 0, sum2 = 0;
    sum1 = a1*60*60 + b1*60 + c1;
    sum2 = a2*60*60 + b2*60 + c2;

    int diff = sum2 - sum1;
    if(sum1 > sum2) diff += 24*60*60;

    printf("%02d:%02d:%02d", diff/60/60, diff/60%60, diff%60);
}
