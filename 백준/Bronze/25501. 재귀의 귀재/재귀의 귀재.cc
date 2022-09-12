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
        int ans = 0;

        for(int i=0; i<str.length(); i++) {
            if(i >= str.length()-1-i) {
                ans = i+1;
                break;
            }
            else if(str[i] != str[str.length()-1-i]) {
                ans = i+1;
                check = false;
                break;
            }
        }

        if(check) cout << 1 << " ";
        else cout << 0 << " ";

        cout << ans << "\n";
    }
}
