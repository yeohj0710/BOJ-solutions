#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    string ans = "ZZZ";

    while(N--) {
        string str; cin >> str;

        if(str.length() != 3) continue;

        ans = min(ans, str);
    }

    cout << ans << "\n";
}
