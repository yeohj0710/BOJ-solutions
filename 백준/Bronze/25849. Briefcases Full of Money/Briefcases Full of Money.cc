#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a[6] = {1, 5, 10, 20, 50, 100};

    int Max = 0, ans = -1;

    for(int i=0; i<6; i++) {
        int x; cin >> x;

        if(x * a[i] >= Max) {
            Max = x * a[i];
            ans = a[i];
        }
    }

    cout << ans << "\n";
}
