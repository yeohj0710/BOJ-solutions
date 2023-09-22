#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int cnt = 0;

        for(int i=0; i<str.length(); i++)
            if(str[i] == 'a') cnt++;

        cout << min(cnt, (int)str.length() - cnt) << "\n";
    }
}
