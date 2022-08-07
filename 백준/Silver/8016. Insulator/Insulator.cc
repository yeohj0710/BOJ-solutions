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

    vector<int> u;

    for(int i=0; i<N/2; i++) {
        u.push_back(v[i]);
        u.push_back(v[N-1-i]);
    }

    if(N % 2 == 1) u.push_back(v[N/2]);

    int ans = 0;

    for(int i=0; i<N; i++) ans += u[i];

    for(int i=1; i<N; i++) ans += max((int)0, u[i] - u[i-1]);

    cout << ans << "\n";
}
