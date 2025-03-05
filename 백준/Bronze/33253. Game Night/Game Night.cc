#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(26);

    string a, b; cin >> a >> b;

    for(int i=0; i<n; i++) v[a[i] - 'a']++;

    int ans = 0;

    for(int i=0; i<n; i++) {
        if(v[b[i] - 'a'] > 0) v[b[i] - 'a']--;
        else ans++;
    }

    cout << ans << "\n";
}
