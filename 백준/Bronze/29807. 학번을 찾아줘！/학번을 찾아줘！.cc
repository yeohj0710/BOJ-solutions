#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(5);

    int N; cin >> N;

    for(int i=0; i<N; i++) cin >> v[i];

    int a, b, c = 0;

    if(v[0] > v[2]) a = abs(v[0] - v[2]) * 508;
    else a = abs(v[0] - v[2]) * 108;

    if(v[1] > v[3]) b = abs(v[1] - v[3]) * 212;
    else b = abs(v[1] - v[3]) * 305;

    if(N == 5) c = v[4] * 707;

    int ans = (a + b + c) * 4763;

    cout << ans << "\n";
}
