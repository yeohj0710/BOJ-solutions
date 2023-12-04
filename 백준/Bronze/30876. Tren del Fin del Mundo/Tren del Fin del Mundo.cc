#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int x, y = INT_MAX;

    while(N--) {
        int a, b; cin >> a >> b;

        if(b < y) {
            x = a;
            y = b;
        }
    }

    cout << x << " " << y << "\n";
}
