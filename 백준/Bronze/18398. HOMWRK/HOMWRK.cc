#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        while(N--) {
            int x, y; cin >> x >> y;
            cout << x + y << " " << x * y << "\n";
        }
    }
}
