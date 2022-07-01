#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int t, N; cin >> t >> N;

        int a = 1, b = 1, ans = 0;

        while(true) {
            int temp = a;
            a = b;
            b = (temp + b) % N;

            ans++;

            if(a == 1 && b == 1) break;
        }

        cout << t << " " << ans << "\n";
    }
}
