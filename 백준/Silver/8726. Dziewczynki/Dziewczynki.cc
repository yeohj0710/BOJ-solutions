#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v;

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        if(x == 0) v.push_back(i);
    }

    if(v.size() < M) {
        cout << "NIE\n";
        return 0;
    }

    int ans = INT_MAX;

    for(int i=M-1; i<v.size(); i++)
        ans = min(ans, v[i] - v[i-M+1] + 1 - M);

    cout << ans << "\n";
}
