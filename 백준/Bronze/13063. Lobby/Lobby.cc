#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, a, b; cin >> N >> a >> b;
        if(N == 0 && a == 0 && b == 0) break;

        int c = N - a - b;

        if(a + c < N/2 + 1) cout << -1 << "\n";
        else if(N/2 + 1 - a >= 0) cout << N/2 + 1 - a << "\n";
        else cout << 0 << "\n";
    }
}
