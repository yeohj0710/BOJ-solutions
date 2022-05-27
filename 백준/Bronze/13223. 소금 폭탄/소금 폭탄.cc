#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int h1, m1, s1, h2, m2, s2; char c;

    cin >> h1 >> c >> m1 >> c >> s1;
    cin >> h2 >> c >> m2 >> c >> s2;

    int a = h1*60*60 + m1*60 + s1;
    int b = h2*60*60 + m2*60 + s2;

    if(b <= a) b += 24*60*60;

    int diff = b - a;

    printf("%02d:%02d:%02d\n", diff/60/60, (diff%(60*60))/60, diff%60);
}
