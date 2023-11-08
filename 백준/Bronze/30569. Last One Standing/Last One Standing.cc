#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;

    for(int i=0; ; i++) {
        if(i % c == 0) d -= b;
        if(i % f == 0) a -= e;

        if(a <= 0 && d <= 0) {
            cout << "draw\n";
            break;
        }
        else if(a <= 0) {
            cout << "player two\n";
            break;
        }
        else if(d <= 0) {
            cout << "player one\n";
            break;
        }
    }
}
