#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int W, N; cin >> W >> N;

    int sum = 0;
    while(N--) {
        int x, y; cin >> x >> y;

        sum += x * y;
    }

    cout << sum / W << "\n";
}
