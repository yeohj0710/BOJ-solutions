#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int ans = v[0];

    for(int i=1; i<N; i++)
        if(v[i] > v[i-1] + 1) ans += v[i];

    cout << ans << "\n";
}
