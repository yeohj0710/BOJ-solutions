#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    string str; cin >> str;

    string ans;
    while(N--) {
        ans = "";

        int cnt = 1;
        for(int i=1; i<str.length(); i++) {
            if(str[i] == str[i-1]) cnt++;
            else {
                ans += to_string(cnt) + str[i-1];
                cnt = 1;
            }
        }
        ans += to_string(cnt) + str[str.length()-1];

        str = ans;
    }

    cout << ans << "\n";
}
