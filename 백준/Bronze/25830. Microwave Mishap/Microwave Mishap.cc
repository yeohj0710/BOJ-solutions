#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    int a, b; scanf("%02d:%02d", &a, &b);

    int sum = a*60*60 + b*60 - a*60 - b;

    printf("%02d:%02d:%02d\n", sum / 3600, (sum % 3600) / 60, sum % 60);
}
