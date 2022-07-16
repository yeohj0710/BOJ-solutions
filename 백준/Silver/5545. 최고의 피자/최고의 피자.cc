#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int a, b; cin >> a >> b;

    int x; cin >> x;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    int ans = x / a;

    int sum = 0;
    for(int i=0; i<N; i++) {
        sum += v[i];

        ans = max(ans, (x + sum)/(a + b*(i+1)));
    }

    cout << ans << "\n";
}
