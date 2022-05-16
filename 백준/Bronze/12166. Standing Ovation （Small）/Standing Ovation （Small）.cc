#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        string str; cin >> str;

        int cnt = 0, ans = 0;

        for(int i=0; i<str.length(); i++)
            if(str[i] != '0') {
                if(cnt >= i) cnt += str[i] - '0';
                else {
                    ans += i - cnt;
                    cnt = i + str[i] - '0';
                }
            }

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
