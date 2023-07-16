#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    cout << (N - 1) * (N - 1) << "\n";

    for(int i=2; i<=N; i++) cout << 1 << " " << i << "\n";
}
