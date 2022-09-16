#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string v[10] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        string ans = "";
        int cnt = 0;

        for(int i=0; i<str.length(); i++) {
            if(str[i] == '0') {
                if(cnt == 0) continue;

                ans += v[str[i-1] - '0'][(cnt - 1) % (v[str[i-1] - '0'].length())];
                cnt = 0;
            }
            else cnt++;
        }

        cout << ans << "\n";
    }
}
