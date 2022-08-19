#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0, cur = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(x > cur) cur++;
        else cur = x;

        ans = max(ans, cur);
    }

    cout << ans << "\n";
}
