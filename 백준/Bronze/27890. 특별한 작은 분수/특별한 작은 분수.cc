#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int x, N; cin >> x >> N;

    while(N--) {
        x = (x % 2) ? ((x*2) ^ 6) : ((x/2) ^ 6);
    }

    cout << x << "\n";
}
