#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;

    map<int, bool> mx, my;
    map<int, bool> xx, yy;

    while(N--) {
        int x, y; cin >> x >> y;

        if(mx[x] && !xx[x]) ans++, xx[x] = true;
        if(my[y] && !yy[y]) ans++, yy[y] = true;

        mx[x] = true;
        my[y] = true;
    }

    cout << ans << "\n";
}
