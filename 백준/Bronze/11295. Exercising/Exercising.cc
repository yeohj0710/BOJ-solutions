#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(5);

    for(int t=1; ; t++) {
        int x; cin >> x;
        if(x == 0) break;

        cout << "User " << t << "\n";

        int N; cin >> N;
        while(N--) {
            int y; cin >> y;

            cout << (double)x * y / 1e5 << "\n";
        }
    }
}

