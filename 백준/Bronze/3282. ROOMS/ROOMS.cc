#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<int> v(n);
    int cur = 0;

    while(m--) {
        int x; cin >> x;

        while(x > 0) {
            if(v[cur] == 2) ;
            else if(v[cur] == 1) v[cur]++, x--;
            else if(v[cur] == 0) v[cur] += min(x, (int)2), x -= v[cur];

            cur++;

            if(cur == n) cur = 0;
        }
    }

    for(int i=0; i<n; i++) cout << v[i] << "\n";
}
