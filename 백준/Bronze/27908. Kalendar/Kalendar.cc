#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    int cur = -b + 2, cnt = 0;

    cout << "+---------------------+\n";

    while(true) {
        if(cnt % 7 == 0) cout << "|";

        cout << ".";

        if(cur <= 0) cout << "..";
        else if(cur < 10) cout << "." << cur;
        else cout << cur;

        cur++;
        cnt++;

        if(cnt % 7 == 0) cout << "|\n";

        if(cur > a) {
            bool check = false;

            if(cnt % 7 == 0) check = true;

            while(cnt % 7 != 0) {
                cout << "...";
                cnt++;
            }
            if(!check) cout << "|\n";
            break;
        }
    }

    cout << "+---------------------+\n";
}
