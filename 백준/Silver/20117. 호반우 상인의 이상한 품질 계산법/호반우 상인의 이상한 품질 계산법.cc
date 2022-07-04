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

    int ans = 0;
    if(N % 2 == 0) {
        for(int i=N/2; i<N; i++) ans += v[i]*2;
    }
    else {
        for(int i=N/2+1; i<N; i++) ans += v[i]*2;
        ans += v[N/2];
    }

    cout << ans << "\n";
}
