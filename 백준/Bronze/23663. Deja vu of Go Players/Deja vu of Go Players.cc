#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        for(int i=0; i<N+M; i++) {
            int x; cin >> x;
        }

        if(N <= M) cout << "Yes\n";
        else cout << "No\n";
    }
}
