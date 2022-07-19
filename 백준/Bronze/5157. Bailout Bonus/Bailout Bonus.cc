#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int C, B, N, r; cin >> C >> B >> N >> r;

        vector<int> v(B);
        for(int i=0; i<B; i++) cin >> v[i];

        int ans = 0;
        for(int i=0; i<N; i++) {
            int a, b; cin >> a >> b;

            bool check = false;
            for(int j=0; j<B; j++)
                if(a == v[j]) check = true;

            if(check) ans += b * r / 100;
        }

        cout << "Data Set " << t << ":\n";
        cout << ans << "\n";
        cout << "\n";
    }
}
