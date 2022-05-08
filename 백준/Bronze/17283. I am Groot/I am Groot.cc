#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, R; cin >> N >> R;

    double ans = 0, mul = 2;
    while(true) {
        N = N * R / 100;
        if(N <= 5) break;

        ans += mul * N;
        mul *= 2;
    }

    cout << ans << "\n";
}
