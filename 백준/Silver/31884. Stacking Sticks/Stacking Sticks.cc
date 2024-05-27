#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    unordered_map<int, int> m;

    while(n--) {
        int a, b; cin >> a >> b;

        if(a == 1) {
            int mx = max({m[b], m[b+1], m[b+2], m[b+3]});

            m[b] = m[b+1] = m[b+2] = m[b+3] = mx + 1;
        }
        else if(a == 2) {
            m[b] += 4;
        }
        else if(a == 3) {
            cout << m[b] << "\n";
        }
    }
}
