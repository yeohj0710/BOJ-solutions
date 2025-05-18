#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        vector<int> v(20);
        for(int i=0; i<20; i++) cin >> v[i];

        for(int i=19; i>0; i--) {
            int x = v[i] / 2;

            v[i] -= x * 2;
            v[i-1] += x;
        }

        for(int i=0; i<20; i++) cout << v[i] << " ";
        cout << "\n";
    }
}
