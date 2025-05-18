#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    string a, b; cin >> a >> b;

    a += '.';

    string ans = "";

    for(int i=4; i<a.length();) {
        if(a[i] == '.') {
            ans += 'v';
            i += 5;
        }
        else {
            ans += 'w';
            i += 9;
        }
    }

    cout << ans << "\n";
}
