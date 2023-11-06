#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    int mx = 0;

    for(int i=0; i<N; i++) {
        string str; cin >> str;

        int cnt = 0;

        for(int i=1; i<M; i++)
            if(str[i] == '0' && str[i-1] == '1') cnt++;

        if(str.back() == '1') cnt++;

        v[i] = cnt;
        mx = max(mx, cnt);
    }

    int ans = 0;

    for(int i=0; i<N; i++)
        if(v[i] == mx) ans++;

    cout << mx << " " << ans << "\n";
}
