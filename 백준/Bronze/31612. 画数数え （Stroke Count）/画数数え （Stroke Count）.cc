#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string s; cin >> N >> s;

    int ans = 0;

    for(int i=0; i<N; i++) {
        if(s[i] == 'o') ans++;
        else ans += 2;
    }

    cout << ans << "\n";
}
