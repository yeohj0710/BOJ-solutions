#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        string str; cin >> str;
        if(str == "0") break;

        int cnt = 1;

        for(int i=1; i<str.length(); i++) {
            if(str[i] == str[i-1]) cnt++;
            else {
                cout << cnt << str[i-1];
                cnt = 1;
            }
        }
        cout << cnt << str.back() << "\n";
    }
}
