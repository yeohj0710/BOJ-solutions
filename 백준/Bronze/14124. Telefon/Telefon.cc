#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int mn = INT_MAX, ans;

    for(int i=2; i<=10; i++) {
        int x = n;

        string s = "";

        while(x > 0) {
            s += char('0' + x % i);
            x /= i;
        }

        int cnt = 0;

        for(int j=1; j<s.length(); j++)
            if(s[j] != s[j-1]) cnt++;

        if(cnt <= mn) {
            mn = cnt;
            ans = i;
        }
    }

    cout << ans << "\n";
}
