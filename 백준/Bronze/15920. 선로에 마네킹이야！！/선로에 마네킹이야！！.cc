#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string str; cin >> N >> str;

    int a = 0, b = 0, w = 0, ans = 5;

    for(int i=0; i<N; i++) {
        if(str[i] == 'W') {
            w++;
            continue;
        }

        if(w == 0) {
            a++;

            if(a % 2 == 1) ans = 1;
            else ans = 5;
        }
        else if(w == 1) ans = 6;
    }

    if(w < 2) cout << 0 << "\n";
    else cout << ans << "\n";
}
