#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0, cnt = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(x == 0) cnt++;
        else ans += cnt;
    }

    cout << ans << "\n";
}
