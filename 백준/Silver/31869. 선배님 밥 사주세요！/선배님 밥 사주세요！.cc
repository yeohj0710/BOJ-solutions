#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    unordered_map<string, int> mp, mp2;

    for(int i=0; i<n; i++) {
        string s; int a, b, c; cin >> s >> a >> b >> c;

        int x = (a - 1) * 7 + b;

        mp[s] = x;
        mp2[s] = c;
    }

    vector<bool> u(1e2);

    for(int i=0; i<n; i++) {
        string s; int x; cin >> s >> x;

        if(x >= mp2[s]) u[mp[s]] = true;
    }

    int ans = 0, cnt = 0;

    for(int i=0; i<1e2; i++) {
        if(u[i]) {
            cnt++;
            ans = max(ans, cnt);
        }
        else cnt = 0;
    }

    cout << ans << "\n";
}
