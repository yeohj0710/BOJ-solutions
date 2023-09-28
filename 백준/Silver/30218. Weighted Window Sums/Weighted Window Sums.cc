#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N+1), u(N+1);

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        v[i] = v[i-1] + x;
        u[i] = u[i-1] + x * i;
    }

    vector<pair<int, int>> w(N+1-M+1);

    for(int i=1; i<=N-M+1; i++) {
        w[i].first = u[i+M-1] - u[i-1] - (v[i+M-1] - v[i-1]) * (i - 1);
        w[i].second = i;
    }

    sort(w.begin()+1, w.end());

    for(int i=1; i<w.size(); i++)
        cout << w[i].second << " " << w[i].first << "\n";
}
