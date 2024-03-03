#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int idx = -1;

        for(int i=0; i<str.length(); i++)
            if(str[i] == '0' || str[i] == '1') idx = i;

        int a = idx, b = str.length() - idx - 1;

        int ans = str[idx] - '0';

        if(b > 0) ans = 1;

        for(int i=0; i<a; i++) ans = !ans;

        cout << ans << "\n";
    }
}
