#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N+1);
    int ans = 0;

    for(int i=1; i<=N; i++) {
        cin >> v[i];

        if(v[i] != i) continue;

        ans++;

        if(i == 1) v[i] = 2;
        else v[i] = 1;
    }

    cout << ans << "\n";

    for(int i=1; i<=N; i++) cout << v[i] << " ";
    cout << "\n";
}
