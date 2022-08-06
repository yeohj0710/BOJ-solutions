#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int sum = 0, Min = INT_MAX;

        for(int i=0; i<7; i++) {
            int x; cin >> x;

            if(x % 2 == 1) continue;

            sum += x;
            Min = min(Min, x);
        }

        cout << sum << " " << Min << "\n";
    }
}
