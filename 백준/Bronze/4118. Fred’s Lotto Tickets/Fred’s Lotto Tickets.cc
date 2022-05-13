#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        bool cnt[50] = {};
        while(N--) {
            for(int i=0; i<6; i++) {
                int x; cin >> x;
                cnt[x] = true;
            }
        }

        bool check = true;
        for(int i=1; i<=49; i++)
            if(!cnt[i]) check = false;

        if(check) cout << "Yes\n";
        else cout << "No\n";
    }
}
