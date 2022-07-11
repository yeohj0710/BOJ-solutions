#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        bool check = false;
        int x = 0, y = 1;

        while(N--) {
            int a, b; cin >> a >> b;
            if(a > M) continue;

            if((double)a/b > (double)x/y
               || ((double)a/b == (double)x/y && a > x)) {
                x = a, y = b;
                check = true;
            }
        }

        if(check) cout << "Buy " << x << " tickets for $" << y << "\n";
        else cout << "No suitable tickets offered\n";
    }
}
