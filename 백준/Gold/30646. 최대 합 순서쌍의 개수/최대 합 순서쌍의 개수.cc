#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N+1);
    unordered_map<int, int> l, m;
    int mx = 0;

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        v[i] = v[i-1] + x;

        if(l[x] == 0) l[x] = i;

        int sum = v[i] - v[l[x] - 1];
        m[sum]++;
        mx = max(mx, sum);
    }

    cout << mx << " " << m[mx] << "\n";
}
