#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        string s; cin >> s;

        if(s >= str) ans++;
    }

    cout << ans << "\n";
}

