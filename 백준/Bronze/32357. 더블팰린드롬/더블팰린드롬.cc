#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int cnt = 0;

    while(n--) {
        string s; cin >> s;

        string ss = s;
        reverse(ss.begin(), ss.end());

        if(s == ss) cnt++;
    }

    cout << cnt * (cnt - 1) << "\n";
}
