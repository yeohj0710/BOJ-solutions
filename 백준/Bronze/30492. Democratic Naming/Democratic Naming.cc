#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    string ans = "";

    for(int i=0; i<M; i++) {
        vector<int> u(26);

        for(int j=0; j<N; j++) u[v[j][i] - 'a']++;

        int mx = 0;

        for(int j=0; j<26; j++) mx = max(mx, u[j]);

        for(int j=0; j<26; j++) {
            if(u[j] == mx) {
                ans += char('a' + j);
                break;
            }
        }
    }

    cout << ans << "\n";
}
