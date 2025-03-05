#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    int a = 0, b = 0;

    for(int i=0; i<m; i++) {
        string s; cin >> s;

        if(s == "X") continue;

        a++;

        b += stoll(s);
    }

    int ans = 0;

    for(int i=0; i<n-1; i++) {
        int c = 0, d = 0;

        for(int j=0; j<m; j++) {
            string s; cin >> s;

            if(s == "X") continue;

            c++;

            d += stoll(s);
        }

        if(c > a || (c == a && d <= b)) ans++;
    }

    cout << ans << "\n";
}
