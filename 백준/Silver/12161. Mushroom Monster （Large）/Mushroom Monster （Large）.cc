#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Case #" << t << ": ";

        int n; cin >> n;

        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        int a = 0;

        for(int i=1; i<n; i++) a += max(v[i-1] - v[i], (int)0);

        int b = 0, mx = 0;

        for(int i=1; i<n; i++) mx = max(mx, v[i-1] - v[i]);

        for(int i=0; i<n-1; i++) b += min(v[i], mx);

        cout << a << " " << b << "\n";
    }
}
