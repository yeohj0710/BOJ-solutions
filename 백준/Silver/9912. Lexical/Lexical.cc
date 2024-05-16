#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(14); v[0] = 1;

    for(int i=1; i<=13; i++) v[i] = v[i-1] * i;

    int N; cin >> N;

    int ans = 1;

    vector<bool> u(14);

    for(int i=N-1; i>=0; i--) {
        int x; cin >> x;

        int cnt = 0;

        for(int j=0; j<x; j++)
            if(!u[j]) cnt++;

        ans += v[i] * cnt;

        u[x] = true;
    }

    cout << ans << "\n";
}
