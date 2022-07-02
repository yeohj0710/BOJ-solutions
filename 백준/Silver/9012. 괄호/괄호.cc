#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        bool check = true;
        int cnt = 0;

        for(int i=0; i<str.length(); i++) {
            if(str[i] == '(') cnt++;
            else cnt--;

            if(cnt < 0) check = false;
        }

        if(cnt != 0) check = false;

        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
