#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int ans = 1;

    for(int i=1; i<=N; i++) ans *= i;

    cout << ans << "\n";
}
