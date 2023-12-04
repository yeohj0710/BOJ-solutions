#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    cout << N * (N - 1) * (N - 2) * (N - 3) * (N - 4) / 120 << "\n";
}
