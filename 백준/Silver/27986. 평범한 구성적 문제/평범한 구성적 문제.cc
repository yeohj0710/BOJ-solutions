#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int mn = INT_MAX;

    while(M--) {
        int a, b; cin >> a >> b;

        mn = min(mn, b - a + 1);
    }

    for(int i=0; i<N; i++) cout << (i % mn) + 1 << " ";
    cout << "\n";
}
