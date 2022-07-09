#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(3);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<double> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        double sum = 0;
        for(int i=0; i<N; i++) sum += v[i];

        int cnt = 0;
        for(int i=0; i<N; i++)
            if(v[i] * N > sum) cnt++;

        cout << (sum / N) + 0.000000001 << " ";
        cout << ((double)cnt / N * 100) + 0.000000001 << "%\n";
    }
}
