#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;
    for(int i=N-1; i>=0; i--) {
        if(ans <= v[i]) ans = v[i];
        else if(ans % v[i] != 0) ans = (ans / v[i] + 1) * v[i];
    }

    cout << ans << "\n";
}
