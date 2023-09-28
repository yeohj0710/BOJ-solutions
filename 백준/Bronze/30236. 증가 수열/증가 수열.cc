#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int x = 0;

        for(int i=1; i<=N; i++) {
            x++;

            int y; cin >> y;

            if(x == y) x++;
        }

        cout << x << "\n";
    }
}
