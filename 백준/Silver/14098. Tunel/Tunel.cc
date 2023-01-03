#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<vector<int>> v(N+1);
    unordered_map<string, int> m;
    int cnt = 0;

    for(int i=0; i<N*2; i++) {
        string str; cin >> str;

        if(!m[str]) m[str] = ++cnt;

        v[m[str]].push_back(i);
    }

    int ans = 0;

    for(int i=1; i<=N; i++) {
        bool check = true;

        for(int j=1; j<=N; j++) {
            if(j == i) continue;

            if(v[i][0] > v[j][0] && v[i][1] < v[j][1]) check = false;
        }

        if(!check) ans++;
    }

    cout << ans << "\n";
}
