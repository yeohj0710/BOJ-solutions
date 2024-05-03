#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string s; cin >> N >> s;

    int ans = 0;

    for(int i=0; i<N/2; i++) {
        if(s[i] == s[N-1-i]) continue;

        ans++;

        if(s[i] < s[N-1-i]) s[N-1-i] = s[i];
        else s[i] = s[N-1-i];
    }

    cout << ans << "\n";
    cout << s << "\n";
}
