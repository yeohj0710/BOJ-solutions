#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    unordered_map<string, int> m;

    for(int i=1; i<=N; i++) {
        string str; cin >> str;

        m[str] = i;
    }

    vector<int> v(N);
    for(int i=0; i<N; i++) {
        string str; cin >> str;

        v[i] = m[str];
    }

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
            if(v[i] < v[j]) ans++;

    cout << ans << "/" << N * (N-1) / 2 << "\n";
}
