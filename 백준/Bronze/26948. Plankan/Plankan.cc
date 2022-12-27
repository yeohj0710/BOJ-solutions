#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(25);
    v[1] = 1, v[2] = 2, v[3] = 4;

    int N; cin >> N;

    for(int i=4; i<=N; i++)
        v[i] = v[i-1] + v[i-2] + v[i-3];

    cout << v[N] << "\n";
}
