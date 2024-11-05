#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n = 223, m = 1e6, k = 1e6;

    cout << n * 2 + 1 << " " << n * 2 << "\n";

    for(int i=1; i<=n; i++) cout << i << " " << n * 2 + 1 << "\n";
    for(int i=n+1; i<=n*2; i++) cout << n * 2 + 1 << " " << i << "\n";
}
