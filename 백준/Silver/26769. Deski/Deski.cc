#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    if(N < 4) {
        cout << 0 << "\n";
        return 0;
    }

    sort(v.begin(), v.end(), greater<int>());

    cout << v[3] * v[3] << "\n";
}
