#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int ans = 0;

    while(M--) {
        int a; cin >> a;

        vector<int> v(N);
        int b = 0;

        for(int i=0; i<N; i++) {
            cin >> v[i];
            b += v[i];
        }

        bool check = false;
        if(b <= a) check = true;

        b -= v[0];
        a -= b;

        if(a <= 0) continue;

        if(a >= 10000) ans += 10000;
        else if(a >= 1000) ans += 1000;
        else if(a >= 100) ans += 100;
        else if(a >= 10) ans += 10;
        else if(a >= 1) ans += 1;

        if(check) ans -= v[0];
    }

    cout << ans << "\n";
}
