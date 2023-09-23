#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        string str; cin >> str;

        bool chk = false;

        for(int i=0; i<str.length()-1; i++)
            if(str.substr(i, 2) == "01" || str.substr(i, 2) == "OI") chk = true;

        if(chk) ans++;
    }

    cout << ans << "\n";
}

