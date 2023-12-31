#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, a, b, c; cin >> N >> a >> b >> c;

    int ans = 1;

    for(int i=1; i<=N; i++) ans *= i;

    for(int i=1; i<=a; i++) ans /= i;
    for(int i=1; i<=b; i++) ans /= i;
    for(int i=1; i<=c; i++) ans /= i;

    cout << ans << "\n";
}
