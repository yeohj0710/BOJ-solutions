#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        string str; cin >> str;

        string tmp = "";

        int a, b; cin >> a >> b;

        while(tmp.length() < b) tmp += str;

        int ans = 0;

        for(int i=a-1; i<b; i++)
            if(tmp[i] == 'B') ans++;

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
