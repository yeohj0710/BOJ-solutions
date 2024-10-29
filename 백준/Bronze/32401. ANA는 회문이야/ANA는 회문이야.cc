#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; string s; cin >> n >> s;

    int ans = 0;

    for(int i=0; i<n; i++)
        for(int j=i; j<n; j++) {
            string ss = s.substr(i, j-i+1);

            if(ss.front() != 'A' || ss.back() != 'A') continue;

            int x = count(ss.begin(), ss.end(), 'A'), y = count(ss.begin(), ss.end(), 'N');

            if(x == 2 && y == 1) ans++;
        }

    cout << ans << "\n";
}
