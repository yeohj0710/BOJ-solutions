#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        cout << 1 << " ";

        for(int i=2; i<N; i++)
            if(__gcd(i, N) == 1) cout << i << " ";

        cout << "\n";
    }
}
