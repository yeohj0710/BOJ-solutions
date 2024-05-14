#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >>N >> M;

    string s; cin >> s;

    while(M--) {
        int a, b, c; cin >> a >> b >> c;

        if(a == 1) {
            int cnt = 1;

            for(int i=b; i<=c-1; i++) {
                if(s[i] != s[i-1]) cnt++;
            }

            cout << cnt << "\n";
        }
        else {
            for(int i=b-1; i<=c-1; i++) {
                s[i] = 'A' + ((s[i] - 'A' + 1) % 26);
            }
        }
    }
}
