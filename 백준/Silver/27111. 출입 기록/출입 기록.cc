#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<bool> v(2e5 + 1);

    int ans = 0;

    while(N--) {
        int a, b; cin >> a >> b;

        if(b == 1) {
            if(v[a]) ans++;
            else v[a] = true;
        }
        else {
            if(!v[a]) ans++;
            else v[a] = false;
        }
    }

    for(int i=1; i<=2e5; i++)
        if(v[i]) ans++;

    cout << ans << "\n";
}
