#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    N *= 2;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    bool chk = true;

    for(int i=1; i<N; i+=2)
        if(v[i] - v[i-1] > M) chk = false;

    if(chk) cout << "Yes\n";
    else cout << "No\n";
}
