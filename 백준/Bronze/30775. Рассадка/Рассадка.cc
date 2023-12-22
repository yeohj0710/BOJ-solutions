#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int avg = 0;

    while(M--) {
        int x; cin >> x;

        avg += x;
    }

    avg = (avg - 1) / N + 1;

    cout << avg << "\n";
}
