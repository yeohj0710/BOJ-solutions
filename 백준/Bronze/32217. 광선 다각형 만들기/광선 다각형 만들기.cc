#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int sum = (n - 1) * 180;

    for(int i=0; i<n; i++) {
        int x; cin >> x;

        sum -= (x * 2);
    }

    cout << sum << "\n";
}
