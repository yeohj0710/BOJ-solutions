#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    string str; cin >> str;

    unordered_map<string, bool> m;
    int ans = 0;

    for(int i=0; i<str.length()-N+1; i++) {
        string tmp = str.substr(i, N);

        if(!m[tmp]) ans++;

        m[tmp] = true;
    }

    cout << ans << "\n";
}
