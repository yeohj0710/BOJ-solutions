#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; string s; cin >> n >> s;

    int a = 0, b = 0;

    for(int i=0; i<n; i++) {
        int x = s[i] - '0';

        if(x % 2 == 0) a++;
        else b++;
    }

    if(a > b) cout << 0 << "\n";
    else if(a < b) cout << 1 << "\n";
    else cout << -1 << "\n";
}
