#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int x; cin >> x;

        string ans = "";

        while(x > 0) {
            ans = (char)((x % 3) + '0') + ans;
            x /= 3;
        }

        for(int i=0; i<ans.length(); i++) cout << ans[i] << " ";
        cout << "\n";
    }
}
