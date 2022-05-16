#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(5);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<double> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        for(int i=1; i<N-1; i++)
            if(v[i] >= (v[i-1] + v[i+1]) / 2) v[i] = (v[i-1] + v[i+1]) / 2;

        cout << "Case #" << t << ": " << v[N-2] << "\n";
    }
}
