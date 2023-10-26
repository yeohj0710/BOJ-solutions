#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v;

    int N; cin >> N;

    while(N > 0) {
        v.push_back(N % 256);
        N /= 256;
    }

    int ans = 0, mul = 1;

    for(int i=v.size()-1; i>=0; i--) {
        ans += v[i] * mul;
        mul *= 256;
    }

    cout << ans << "\n";
}
