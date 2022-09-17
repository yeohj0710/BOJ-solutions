#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string a, b; cin >> a >> b;

        while(a.length() < b.length()) a = '0' + a;
        while(a.length() > b.length()) b = '0' + b;

        string ans = "";
        int c = 0;

        for(int i=a.length()-1; i>=0; i--) {
            int tmp = 0;

            if(a[i] == '1') tmp++;
            if(b[i] == '1') tmp++;
            tmp += c;

            if(tmp >= 2) c = 1, tmp -= 2;
            else c = 0;

            ans = char('0' + tmp) + ans;
        }

        if(c == 1) ans = '1' + ans;

        bool check = false;

        for(int i=0; i<ans.length(); i++)
            if(ans[i] != '0') {
                cout << ans.substr(i, ans.length() - i) << "\n";

                check = true;
                break;
            }

        if(!check) cout << 0 << "\n";
    }
}
