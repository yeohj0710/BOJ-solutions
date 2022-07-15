#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N), u(N);
    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<N; i++) cin >> u[i];

    vector<int> w(N);
    for(int i=0; i<N; i++) w[i] = v[i] - u[i];

    vector<int> sum(N+1);
    for(int i=1; i<=N; i++) sum[i] = sum[i-1] + w[i-1];

    map<int, int> m;
    for(int i=0; i<=N; i++) m[sum[i]]++;

    vector<int> l;
    for(int i=0; i<=N; i++) l.push_back(sum[i]);

    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());

    int ans = 0;
    for(int i=0; i<l.size(); i++)
        if(m[l[i]] >= 2) ans += m[l[i]] * (m[l[i]] - 1) / 2;

    cout << ans << "\n";
}
