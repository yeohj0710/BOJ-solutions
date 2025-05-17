#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(4), u(4);

    for(int i=0; i<4; i++) cin >> v[i];
    for(int i=0; i<4; i++) cin >> u[i];

    int n; cin >> n;

    int cnt = 0;

    while(n--) {
        int a, b; cin >> a >> b;

        if(a >= 2 && a <= 5) {
            v[a - 2] += b;

            cout << v[a - 2] << "\n";
        }
        else {
            bool chk = true;

            for(int i=0; i<4; i++)
                if(v[i] < u[i] * b) chk = false;

            if(chk) {
                for(int i=0; i<4; i++)
                    v[i] -= u[i] * b;

                cnt += b;

                cout << cnt << "\n";
            }
            else cout << "Hello, siumii\n";
        }
    }
}
