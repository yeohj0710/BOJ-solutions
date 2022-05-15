#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int cnt = 0, ans = 0;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == '0') cnt++;
        else {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    ans = max(ans, cnt);

    ans = (ans + 1) / 2;

    cout << ans << "\n";
}
