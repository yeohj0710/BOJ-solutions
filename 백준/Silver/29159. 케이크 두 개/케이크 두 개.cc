#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> x(9), y(9);

    for(int i=1; i<=8; i++) cin >> x[i] >> y[i];

    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    for(int i=1; i<=4; i++) x1 += x[i], y1 += y[i];
    for(int i=5; i<=8; i++) x2 += x[i], y2 += y[i];

    int au = y2 - y1, ad = x2 - x1;

    int gcd = __gcd(au, ad);

    au /= gcd, ad /= gcd;

    if(ad < 0) au = -au, ad = -ad;

    int bu = y1 * ad - au * x1, bd = 4 * ad;

    gcd = __gcd(bu, bd);

    bu /= gcd, bd /= gcd;

    if(bd < 0) bu = -bu, bd = -bd;

    cout << au;

    if(ad != 1) cout << "/" << ad;

    cout << " " << bu;

    if(bd != 1) cout << "/" << bd;

    cout << "\n";
}
