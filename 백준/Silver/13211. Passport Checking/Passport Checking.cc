#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    map<string, bool> m;

    int N; cin >> N;

    while(N--) {
        string str; cin >> str;
        m[str] = true;
    }

    int ans = 0;

    int M; cin >> M;

    while(M--) {
        string str; cin >> str;
        if(m[str]) ans++;
    }

    cout << ans << "\n";
}
