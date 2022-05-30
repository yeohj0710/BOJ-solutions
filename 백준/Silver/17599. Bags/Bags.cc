#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<int, bool> m;

    int ans = 0;

    while(N--) {
        int x; cin >> x;

        if(!m[x]) ans++;

        m[x] = true;
    }

    cout << ans << "\n";
}
