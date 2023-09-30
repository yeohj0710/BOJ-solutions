#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    string a, b; cin >> a >> b;

    int mn = N-1, mx = 0;

    for(int i=0; i<N; i++)
        if(a[i] != b[i]) mn = min(mn, i), mx = max(mx, i);

    while(true) {
        if(mn > 0 && a[mn - 1] == b[mx + 1]) mn--, mx++;
        else break;
    }

    cout << mn + 1 << " " << mx + 1 << "\n";
}
