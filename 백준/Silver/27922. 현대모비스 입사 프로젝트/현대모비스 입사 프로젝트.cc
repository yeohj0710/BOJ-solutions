#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N), u(N), w(N);

    for(int i=0; i<N; i++) {
        int a, b, c; cin >> a >> b >> c;

        v[i] = a + b;
        u[i] = b + c;
        w[i] = c + a;
    }

    sort(v.begin(), v.end(), greater<int>());
    sort(u.begin(), u.end(), greater<int>());
    sort(w.begin(), w.end(), greater<int>());

    int a = 0, b = 0, c = 0;

    for(int i=0; i<M; i++) {
        a += v[i], b += u[i], c += w[i];
    }

    int ans = max({a, b, c});

    cout << ans << "\n";
}
