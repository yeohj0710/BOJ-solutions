#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int mn = 0, mx = INT_MAX;

    while(N--) {
        int a, b, c, d; cin >> a >> b >> c >> d;

        mn = max(mn, a * 60 + b);
        mx = min(mx, c * 60 + d);
    }

    if(mn >= mx) {
        cout << "NE\n";
        return 0;
    }

    cout << "TAIP\n";

    cout << mn / 60 << " " << mn % 60 << " ";
    cout << mx / 60 << " " << mx % 60 << "\n";
}

