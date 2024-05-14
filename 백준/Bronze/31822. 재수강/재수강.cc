#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; cin >> s;

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        string ss; cin >> ss;

        if(s.substr(0, 5) == ss.substr(0, 5)) ans++;
    }

    cout << ans << "\n";
}
