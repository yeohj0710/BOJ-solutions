#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    priority_queue<int, vector<int>, greater<int>> q;
    for(int i=0; i<M; i++) q.push(0);

    int ans = 0;

    for(int i=0; i<N; i++) {
        int x = q.top();
        q.pop();

        x += v[i];
        ans += x;

        q.push(x);
    }

    cout << ans << "\n";
}
