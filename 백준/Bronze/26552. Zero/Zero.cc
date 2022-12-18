#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int x; cin >> x;

        for(int i=x+1; ; i++) {
            int tmp = i;

            bool check = true;

            while(tmp > 0) {
                if(tmp % 10 == 0) check = false;

                tmp /= 10;
            }

            if(check) {
                cout << i << "\n";
                break;
            }
        }
    }
}
