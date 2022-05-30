#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    map<string, int> m;

    while(N--) {
        string str; cin >> str;
        int x; cin >> x;

        m[str] = x;
    }

    while(M--) {
        int ans = 0;

        while(true) {
            string str; cin >> str;
            if(str == ".") break;

            ans += m[str];
        }

        cout << ans << "\n";
    }
}
