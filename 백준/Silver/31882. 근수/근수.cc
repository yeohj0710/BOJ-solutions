#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; string s; cin >> n >> s;

    int row = 0, cnt = 0, ans = 0;

    for(int i=0; i<n; i++) {
        if(s[i] == '2') {
            row++;
            cnt += row;
            ans += cnt;
        }
        else {
            row = 0;
            cnt = 0;
        }
    }

    cout << ans << "\n";
}
