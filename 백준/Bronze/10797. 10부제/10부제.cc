#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a; cin >> a;

    int ans = 0;
    for(int i=0; i<5; i++) {
        int b; cin >> b;
        if(a == b) ans++;
    }

    cout << ans << "\n";
}
