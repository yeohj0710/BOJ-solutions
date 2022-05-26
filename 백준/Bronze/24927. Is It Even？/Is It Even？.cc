#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    int cnt = 0;

    while(N--) {
        int x; cin >> x;

        while(x > 0) {
            if(x % 2 == 0) {
                x /= 2;
                cnt++;
            }
            else break;
        }
    }

    if(cnt >= K) cout << 1 << "\n";
    else cout << 0 << "\n";
}
