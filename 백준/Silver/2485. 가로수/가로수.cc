#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N-1);
    int prev; cin >> prev;
    for(int i=0; i<N-1; i++) {
        int curr; cin >> curr;
        v[i] = curr - prev;
        prev = curr;
    }

    int gcd = v[0];
    for(int i=1; i<N-1; i++) gcd = __gcd(gcd, v[i]);

    int ans = 0;
    for(int i=0; i<N-1; i++) ans += v[i]/gcd - 1;

    cout << ans << "\n";
}
