#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    string ans = "";

    while(N--) {
        string str; cin >> str;

        bool chk = false;

        for(int i=0; i<str.length(); i++)
            if(str[i] == 'S') chk = true;

        if(chk) ans = str;
    }

    cout << ans << "\n";
}
