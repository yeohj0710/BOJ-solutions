#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N), u(M);

    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<M; i++) cin >> u[i];

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    int a = 1, b = 1, aa = v[0], bb = u[0];

    for(int i=1; i<N; i++) {
        if(v[i] - aa >= 100) {
            a++;
            aa = v[i];
        }
    }

    for(int i=1; i<M; i++) {
        if(u[i] - bb >= 360) {
            b++;
            bb = u[i];
        }
    }

    cout << a << " " << b << "\n";
}
