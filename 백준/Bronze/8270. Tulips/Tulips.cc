#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<bool> v(15001);
    while(N--) {
        int x; cin >> x;
        v[x] = true;
    }

    int ans = 0;
    for(int i=1; i<=15000; i++)
        if(!v[i]) ans++;

    cout << ans << "\n";
}
