#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(9);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<double> v(N+1);
        for(int i=0; i<N+1; i++) cin >> v[i];

        v[0] *= -1;

        double l = 0, r = 2;

        while(l + 1e-10 < r) {
            double m = (l + r)/2;

            double sum = 0;

            for(int i=0; i<N+1; i++) sum += v[N-i] * pow(m, i);

            if(sum <= 0) r = m;
            else l = m;
        }

        cout << "Case #" << t << ": " << (l - 1) << "\n";
    }
}
