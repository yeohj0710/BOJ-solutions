#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        int x; cin >> x;

        if(x > 4500) cout << "Round 1\n";
        else if(x > 1000) cout << "Round 2\n";
        else if(x > 25) cout << "Round 3\n";
        else cout << "World Finals\n";
    }
}
