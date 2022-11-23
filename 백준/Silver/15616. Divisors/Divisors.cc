#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(2e6 + 1);

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        v[x]++;
    }

    int ans = 0;

    for(int i=1; i<=2e6; i++)
        for(int j=i; j<=2e6; j+=i) ans += v[i] * v[j];

    ans -= N;

    cout << ans << "\n";
}
