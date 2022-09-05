#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int t; cin >> t;

        vector<int> v(12);
        for(int i=0; i<12; i++) cin >> v[i];

        int ans = 0;

        for(int i=1; i<11; i++)
            for(int j=i; j<11; j++) {
                bool check = true;

                for(int k=i; k<=j; k++)
                    if(v[k] <= v[i-1] || v[k] <= v[j+1]) check = false;

                if(check) ans++;
            }

        cout << t << " " << ans << "\n";
    }
}
