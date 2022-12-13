#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    string str; cin >> str;
    int cur = 0;

    for(int i=1; ; i++) {
        string tmp = to_string(i);

        for(int j=0; j<tmp.length(); j++)
            if(tmp[j] == str[cur]) {
                cur++;

                if(cur == str.length()) {
                    cout << i << "\n";
                    return 0;
                }
            }
    }
}
