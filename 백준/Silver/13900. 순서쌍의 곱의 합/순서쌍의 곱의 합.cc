#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int sum = 0;
    for(int i=0; i<N; i++) sum += v[i];

    int sq_sum = 0;
    for(int i=0; i<N; i++) sq_sum += v[i] * v[i];

    int ans = (sum * sum - sq_sum) / 2;
    cout << ans << "\n";
}
