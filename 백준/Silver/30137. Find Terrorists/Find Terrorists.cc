#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int Max = 1e4 + 1;

    vector<bool> isp(Max, true);
    isp[0] = isp[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) isp[i*j] = false;

    vector<int> v(1e4 + 1);

    for(int i=1; i<=1e4; i++)
        for(int j=1; j*j<=i; j++) {
            if(i % j != 0) continue;
            if(j * j == i) v[i]++;
            else v[i] += 2;
        }

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        bool chk = false;

        for(int i=a; i<=b; i++) {
            if(isp[v[i]]) {
                cout << i << " ";
                chk = true;
            }
        }

        if(!chk) cout << -1 << " ";

        cout << "\n";
    }
}
