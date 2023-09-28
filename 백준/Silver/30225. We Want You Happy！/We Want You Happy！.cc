#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int cur = 0;

    while(N--) {
        int a, b, c, d; cin >> a >> b >> c >> d;

        if(cur > b + d) continue;

        cout << a << "\n";

        cur = max(cur, b) + c;
    }
}
