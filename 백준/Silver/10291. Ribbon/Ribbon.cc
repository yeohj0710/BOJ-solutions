#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;

    while(cin >> N) {
        vector<int> v(N);

        for(int i=0; i<N; i++) {
            cin >> v[i];

            v[i] -= 2;
        }

        int gcd = v[0];

        for(int i=0; i<N; i++) gcd = __gcd(gcd, v[i]);

        int cnt = 0;

        for(int i=0; i<N; i++) cnt += v[i] / gcd;

        cout << gcd << " " << cnt << "\n";
    }
}
