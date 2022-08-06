#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int ans = INT_MAX, sum = 0;

    for(int i=1; i<N; i+=2) {
        sum += min(abs(v[i-1] - v[i]), 24 - abs(v[i-1] - v[i]));
    }

    ans = min(ans, sum);
    sum = 0;

    for(int i=2; i<N; i+=2) {
         sum += min(abs(v[i-1] - v[i]), 24 - abs(v[i-1] - v[i]));
    }
    sum += min(abs(v[N-1] - v[0]), 24 - abs(v[N-1] - v[0]));

    ans = min(ans, sum);

    cout << ans << "\n";
}
