#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int N; char ch; cin >> N >> ch;

        for(int i=1; i<=N; i++) {
            for(int j=1; j<=i; j++) cout << char('A' + (ch - 'A' + (i - 1)) % 26);
            cout << "\n";
        }
        cout << "\n";
    }
}
