#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Data Set " << t << ":\n";

        int a, b; cin >> a >> b;

        if(a <= b) {
            cout << "no drought\n\n";
            continue;
        }

        int x = 5, cnt = 0;

        while(true) {
            if(a <= b * x) break;

            cnt++;
            x *= 5;
        }

        while(cnt--) cout << "mega ";

        cout << "drought\n\n";
    }
}
