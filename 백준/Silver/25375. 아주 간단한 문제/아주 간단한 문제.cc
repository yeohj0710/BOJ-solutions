#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        if(b % a == 0 && b > a) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
}
