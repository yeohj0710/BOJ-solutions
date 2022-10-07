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

    for(int i=0; i<N; i++) {
        int l = i, r = i;

        while(l != 0 && v[l-1] <= v[l]) l--;
        while(r != N-1 && v[r] >= v[r+1]) r++;

        ans = max(ans, r-l+1);
    }

    cout << ans << "\n";
}
