#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int a = INT_MAX, b = INT_MAX, x = 0;

    for(int i=0; i<N; i++) {
        x = v[i] - x;

        if(i % 2 == 0) a = min(a, x);
        else b = min(b, x);
    }

    int ans = max(a - max(-b, (int)0) + 1, (int)0);

    cout << ans << "\n";
}
