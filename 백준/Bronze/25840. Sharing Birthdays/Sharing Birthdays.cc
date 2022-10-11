#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<string, bool> m;
    int ans = 0;

    while(N--) {
        string str; cin >> str;

        if(!m[str]) ans++;

        m[str] = true;
    }

    cout << ans << "\n";
}
