#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int ans = 1;
    for(int i=0; i<M; i++) {
        if(i < N%M) ans *= N/M + 1;
        else ans *= N/M;
    }

    cout << ans << "\n";
}
