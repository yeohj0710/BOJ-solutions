#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int M, N; cin >> M >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    unordered_map<int, bool> m;

    for(int i=0; i<N; i++) {
        if(M % v[i] == 0 && m[M / v[i]]) {
            cout << M / v[i] << " " << v[i] << "\n";
            break;
        }

        m[v[i]] = true;
    }
}
