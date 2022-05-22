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

    if(v[0] == 0) a[0] = 0;
    else a[0] = 1;

    for(int i=1; i<N; i++) {
        if(v[i] == 0) a[i] = a[i-1];
        else a[i] = a[i-1] + 1;
    }

    if(v[N-1] == 0) b[N-1] = 1;
    else b[N-1] = 0;

    for(int i=N-2; i>=0; i--) {
        if(v[i] == 0) b[i] = b[i+1] + 1;
        else b[i] = b[i+1];
    }

    int ans = 0;
    for(int i=0; i<N; i++) ans = max(ans, a[i] + b[i]);

    cout << N - ans << "\n";
}
