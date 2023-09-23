#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int x, y, r; cin >> x >> y >> r;

    int a = 0, b = 0;

    while(N--) {
        int val; cin >> val;

        if(x - r < val && val < x + r) a++;
        if(x - r == val || x + r == val) b++;
    }

    cout << a << " " << b << "\n";
}

