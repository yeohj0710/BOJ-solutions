#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        string a, b; cin >> a >> b;

        int x = 0, y = 0;

        for(int i=0; i<a.length(); i++) {
            if(a[i] == b[i]) x++;
            else y++;
        }

        cout << min(N, x) + min((int)a.length() - N, y) << "\n";
    }
}
