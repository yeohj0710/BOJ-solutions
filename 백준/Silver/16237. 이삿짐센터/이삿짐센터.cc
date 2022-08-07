#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

    int ans = e;

    while(a > 0 || b > 0 || c > 0 || d > 0) {
        if(d > 0) {
            d--;

            if(a > 0) a--;
        }
        else if(c > 0) {
            c--;

            if(b > 0) b--;
            else {
                if(a > 0) a--;
                if(a > 0) a--;
            }
        }
        else if(b > 0) {
            b--;

            if(b > 0) {
                b--;

                if(a > 0) a--;
            }
            else {
                if(a > 0) a--;
                if(a > 0) a--;
                if(a > 0) a--;
            }
        }
        else {
            if(a > 0) a--;
            if(a > 0) a--;
            if(a > 0) a--;
            if(a > 0) a--;
            if(a > 0) a--;
        }

        ans++;
    }

    cout << ans << "\n";
}
