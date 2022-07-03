#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a[41] = {1, 0, 1};
    int b[41] = {0, 1, 1};

    for(int i=3; i<=40; i++) {
        a[i] = a[i-1] + a[i-2];
        b[i] = b[i-1] + b[i-2];
    }

    int T; cin >> T;

    while(T--) {
        int x; cin >> x;

        cout << a[x] << " " << b[x] << "\n";
    }
}
