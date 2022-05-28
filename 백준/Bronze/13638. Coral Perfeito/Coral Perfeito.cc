#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;

    while(cin >> N) {
        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int sum = 0;
        for(int i=0; i<N; i++) sum += v[i];

        if(sum % N != 0) {
            cout << -1 << "\n";
            continue;
        }

        int avg = sum / N;

        int ans = 0;
        for(int i=0; i<N; i++) ans += abs(v[i] - avg);

        ans /= 2;
        ans++;

        cout << ans << "\n";
    }
}
