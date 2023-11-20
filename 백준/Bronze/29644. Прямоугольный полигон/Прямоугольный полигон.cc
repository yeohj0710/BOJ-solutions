#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    if(b % 2 == 1) {
        cout << -1 << "\n";
        return 0;
    }

    for(int i=1; i<b/2; i++) {
        int j = b / 2 - i;

        if(i < j) continue;

        if(i * j == a) {
            cout << i << " " << j << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";
}
