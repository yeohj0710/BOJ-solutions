#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    vector<int> v = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while(T--) {
        int ans = 0;

        vector<int> u(10);
        for(int i=0; i<10; i++) cin >> u[i];

        for(int i=1; i<=12; i++)
            for(int j=1; j<=v[i]; j++) {
                bool chk = true;

                string str = to_string(i);

                for(int k=0; k<str.length(); k++)
                    if(u[str[k] - '0'] == 1) chk = false;

                str = to_string(j);

                for(int k=0; k<str.length(); k++)
                    if(u[str[k] - '0'] == 1) chk = false;

                if(chk) ans++;
            }

        cout << ans << "\n";
    }
}
