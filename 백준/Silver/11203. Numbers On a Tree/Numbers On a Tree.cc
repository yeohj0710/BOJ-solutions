#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    string s; getline(cin, s);

    int x = 1;

    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'L') x = x*2;
        else if(s[i] == 'R') x = x*2 + 1;
    }

    int ans = pow(2, n+1) - x;

    cout << ans << "\n";
}
