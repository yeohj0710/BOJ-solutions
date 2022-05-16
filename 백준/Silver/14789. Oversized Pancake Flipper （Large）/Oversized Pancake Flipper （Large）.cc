#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        string str; cin >> str;

        int N; cin >> N;

        int ans = 0;
        for(int i=0; i<str.length()-N+1; i++) {
            if(str[i] == '-') {
                for(int j=i; j<i+N; j++) {
                    if(str[j] == '-') str[j] = '+';
                    else str[j] = '-';
                }
                ans++;
            }
        }

        bool check = true;
        for(int i=0; i<str.length(); i++)
            if(str[i] != '+') check = false;

        cout << "Case #" << t << ": ";
        if(check) cout << ans << "\n";
        else cout << "IMPOSSIBLE\n";
    }
}
