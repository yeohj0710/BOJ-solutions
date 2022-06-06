#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> a(N), b(N);

    int Max = 0;
    for(int i=0; i<N; i++) {
        Max = max(Max, v[i]);
        a[i] = Max;
    }

    int Min = INT_MAX;
    for(int i=N-1; i>=0; i--) {
        Min = min(Min, v[i]);
        b[i] = Min;
    }

    int ans = 0;
    for(int i=0; i<N-1; i++)
        ans = max(ans , a[i] - b[i+1]);

    cout << ans << "\n";
}
