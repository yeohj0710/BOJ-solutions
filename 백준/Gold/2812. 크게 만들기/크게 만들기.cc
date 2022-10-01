#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    string str; cin >> str;

    string ans = "";

    for(int i=0; i<str.length(); i++) {
        while(ans.length() > 0 && str[i] > ans.back() && M > 0) {
            ans.pop_back();
            M--;
        }

        ans += str[i];
    }

    ans = ans.substr(0, ans.length()-M);

    cout << ans << "\n";
}
