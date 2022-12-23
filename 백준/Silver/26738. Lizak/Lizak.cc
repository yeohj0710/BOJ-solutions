#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    unordered_map<int, int> m;
    set<int> s;
    int i = 0, j = 0, ans = INT_MAX;

    while(true) {
        if(s.size() == 0) {
            j++;

            if(j > N) break;

            m[v[j]]++;

            if(m[v[j]] == 3) s.insert(v[j]);
        }
        else {
            i++;
            m[v[i]]--;

            if(m[v[i]] < 3) s.erase(v[i]);
        }

        if(s.size() > 0) ans = min(ans, j-i);
    }

    if(ans != INT_MAX) cout << ans << "\n";
    else cout << "NIE\n";
}
