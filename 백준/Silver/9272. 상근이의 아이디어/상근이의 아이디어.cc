#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    int N = b - a + 1;

    cout << N * (N - 1) / 2 << "\n";
}
