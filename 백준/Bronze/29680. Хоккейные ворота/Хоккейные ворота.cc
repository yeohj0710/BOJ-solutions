#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double H, W, w1, w2; cin >> H >> W >> w1 >> w2;

    cout << fixed << setprecision(5);

    cout << w1 * W + (w1 + w2) * H + W * sqrt(pow(w2 - w1, 2) + H * H) << "\n";
}
