#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int ans = 0;

        for(int i=0; i<str.length(); i+=8) {
            int cnt = 0;

            for(int j=i; j<i+7; j++)
                if(str[j] == '1') cnt++;

            if((cnt % 2 == 0 && str[i+7] == '1')
               || (cnt % 2 == 1 && str[i+7] == '0')) ans++;
        }

        cout << ans << "\n";
    }
}
