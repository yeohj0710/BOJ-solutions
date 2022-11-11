#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int a = INT_MAX, b = INT_MAX;

        for(int i=1; i*i<=N; i++) {
            if(N % i != 0) continue;
            if((N / i + i) % 2 != 0) continue;

            int x = (N / i + i) / 2;
            int y = N / i - x;

            if(y < b) {
                a = x;
                b = y;
            }
        }

        if(b != INT_MAX) cout << b << " " << a << "\n";
        else cout << "IMPOSSIBLE\n";
    }
}
