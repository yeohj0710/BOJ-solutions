#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        for(int i=0; i<b; i++) {
            for(int j=0; j<a; j++) cout << "X";
            cout << "\n";
        }
        cout << "\n";
    }
}
