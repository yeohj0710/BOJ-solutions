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

    if(v[0] == 2) a[0] = 1;
    if(v[N-1] == 1) b[N-1] = 1;

    for(int i=1; i<N; i++) {
        if(v[i] == 1) a[i] = a[i-1];
        else a[i] = a[i-1] + 1;
    }

    for(int i=N-2; i>=0; i--) {
        if(v[i] == 1) b[i] = b[i+1] + 1;
        else b[i] = b[i+1];
    }

    int ans = INT_MAX;
    for(int i=0; i<N; i++) ans = min(ans, a[i] + b[i] - 1);

    cout << ans << "\n";
}
