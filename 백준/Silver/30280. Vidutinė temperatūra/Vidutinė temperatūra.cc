#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    string str; cin >> str;

    vector<int> v(N+1);

    for(int i=0; i<str.length(); i++) {
        v[i+1] = v[i];

        if(str[i] == '+') v[i+1]++;
        else v[i+1]--;
    }

    unordered_map<int, int> mn, mx;
    int ans = 0;

    for(int i=1; i<=N; i++) {
        if(v[i] != 0 && mn[v[i]] == 0) mn[v[i]] = i;
        else mn[v[i]] = min(mn[v[i]], i);

        if(mx[v[i]] == 0) mx[v[i]] = i;
        else mx[v[i]] = max(mx[v[i]], i);

        ans = max(ans, mx[v[i]] - mn[v[i]]);
    }

    cout << ans << "\n";
}
