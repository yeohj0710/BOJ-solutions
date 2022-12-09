#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    for(int i=0; i<N; i++) cin >> v[i];

    int x = 0;

    for(int i=0; i<N; i++) {
        if(v[i] < v[i+1]) {
            x += M / v[i];
            M -= (M / v[i]) * v[i];
        }
        else {
            M += x * v[i];
            x = 0;
        }
    }

    cout << M << "\n";
}
