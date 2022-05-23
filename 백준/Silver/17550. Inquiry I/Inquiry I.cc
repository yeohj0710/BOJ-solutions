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

    a[0] = v[0]*v[0];
    for(int i=1; i<N; i++) a[i] = a[i-1] + v[i]*v[i];

    b[N-1] = v[N-1];
    for(int i=N-2; i>=0; i--) b[i] = b[i+1] + v[i];

    int ans = 0;
    for(int i=0; i<N-1; i++) ans = max(ans, a[i]*b[i+1]);

    cout << ans << "\n";
}
