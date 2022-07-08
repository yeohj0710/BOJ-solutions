#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<bool> v(42);

    for(int i=0; i<10; i++) {
        int x; cin >> x;
        v[x % 42] = true;
    }

    int ans = 0;
    for(int i=0; i<42; i++)
        if(v[i]) ans++;

    cout << ans << "\n";
}
