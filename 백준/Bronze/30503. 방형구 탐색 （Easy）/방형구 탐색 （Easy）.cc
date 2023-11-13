#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    int M; cin >> M;

    while(M--) {
        int a; cin >> a;

        if(a == 1) {
            int b, c, d; cin >> b >> c >> d;

            int ans = 0;

            for(int i=b; i<=c; i++)
                if(v[i] == d) ans++;

            cout << ans << "\n";
        }
        else {
            int b, c; cin >> b >> c;

            for(int i=b; i<=c; i++) v[i] = 0;
        }
    }
}
