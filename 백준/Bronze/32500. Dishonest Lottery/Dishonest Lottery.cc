#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    n *= 10;

    vector<int> v(51);

    for(int i=0; i<n; i++) {
        for(int j=0; j<5; j++) {
            int x; cin >> x;

            v[x]++;
        }
    }

    bool chk = false;

    for(int i=1; i<=50; i++) {
        if(v[i] > n / 10 * 2) {
            cout << i << " ";
            chk = true;
        }
    }

    if(!chk) cout << -1 << " ";

    cout << "\n";
}
