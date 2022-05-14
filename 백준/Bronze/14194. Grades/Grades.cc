#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<double> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        sort(v.begin(), v.end());

        double a = 0, b = 0;

        a = (v[0] + v[N-1]) / 2;

        for(int i=0; i<N; i++) b += v[i];
        b /= N;

        if(abs(a - b) < 1) cout << "Yes\n";
        else cout << "No\n";
    }
}
