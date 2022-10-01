#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;

    for(int i=0; i<N; i++) {
        int Max = 0;

        for(int j=0; j<N; j++) {
            int x; cin >> x;

            Max = max(Max, x);
        }

        ans += Max;
    }

    cout << ans << "\n";
}
