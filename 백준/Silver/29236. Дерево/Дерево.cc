#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N_; cin >> N_;

    if(N_ == 1) {
        cout << 0 << "\n";
        return 0;
    }

    __int128 N = N_;

    __int128 val = (N / 2) * (N - N / 2);

    string ans = "";

    while(val > 0) {
        ans = char('0' + val % 10) + ans;
        val /= 10;
    }

    cout << ans << "\n";
}
