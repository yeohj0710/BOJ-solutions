#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; string str; cin >> a >> b >> str;

    int ans = 0;

    if(str == "freeze") ans = min(a, b);
    else if(str == "heat") ans = max(a, b);
    else if(str == "auto") ans = b;
    else ans = a;

    cout << ans << "\n";
}
