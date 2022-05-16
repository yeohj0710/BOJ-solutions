#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;

    for(int i=0; i<N; i++) {
        int a, b; cin >> a >> b;

        if(a*5 - b*3 > 40) ans++;
    }

    cout << ans;
    if(ans == N) cout << "+";
    cout << "\n";
}
