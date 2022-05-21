#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int ans = 0;
    for(int i=0; i<N; i++) {
        bool check = true;
        for(int j=0; j<M; j++) {
            int x; cin >> x;
            if(x == 0) check = false;
        }

        if(check) ans++;
    }

    cout << ans << "\n";
}
