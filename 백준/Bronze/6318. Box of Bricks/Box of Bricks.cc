#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N; cin >> N;
        if(N == 0) break;

        int avg = 0;

        vector<int> v(N);
        for(int i=0; i<N; i++) {
            cin >> v[i];
            avg += v[i];
        }

        avg /= N;

        int ans = 0;
        for(int i=0; i<N; i++) ans += abs(v[i] - avg);

        ans /= 2;

        cout << "Set #" << t << "\n";
        cout << "The minimum number of moves is " << ans << ".\n\n";
    }
}
