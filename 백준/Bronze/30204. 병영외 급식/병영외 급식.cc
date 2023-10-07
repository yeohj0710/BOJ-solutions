#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int sum = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        sum += x;
    }

    if(sum % M == 0) cout << 1 << "\n";
    else cout << 0 << "\n";
}
