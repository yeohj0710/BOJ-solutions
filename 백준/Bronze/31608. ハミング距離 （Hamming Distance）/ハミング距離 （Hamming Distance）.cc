#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string a, b; cin >> N >> a >> b;

    int ans = 0;

    for(int i=0; i<N; i++)
        if(a[i] != b[i]) ans++;

    cout << ans << "\n";
}
