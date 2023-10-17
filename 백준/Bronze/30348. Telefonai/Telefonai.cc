#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int ans = INT_MAX;

    while(N--) {
        int x; cin >> x;

        string str = to_string(x);

        bool chk = true;

        for(int i=1; i<str.length(); i++)
            if(str[i] != str[i-1]) chk = false;

        if(chk) {
            ans = min(ans, x);
            continue;
        }

        chk = true;

        for(int i=1; i<str.length(); i++)
            if(str[i] <= str[i-1]) chk = false;

        if(chk) ans = min(ans, x);
    }

    if(ans != INT_MAX) cout << ans << "\n";
    else cout << "NERASTA\n";
}
