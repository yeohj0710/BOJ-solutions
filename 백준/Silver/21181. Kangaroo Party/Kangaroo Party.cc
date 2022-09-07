#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = INT_MAX;

    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++) {
            int sum = 0;

            for(int k=0; k<N; k++) {
                int x = min(abs(v[i] - v[k]), abs(v[j] - v[k]));

                sum += x * x;
            }

            ans = min(ans, sum);
        }

    cout << ans << "\n";
}
