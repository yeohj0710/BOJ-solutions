#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int a, b; cin >> a >> b;

    int ans = 4;

    if(a == 1) ans--;
    if(a == N) ans--;
    if(b == 1) ans--;
    if(b == N) ans--;

    cout << ans << "\n";
}
