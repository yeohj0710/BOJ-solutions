#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> u(v);
    sort(u.begin(), u.end());

    if(v == u) cout << "yes\n";
    else cout << "no\n";
}
