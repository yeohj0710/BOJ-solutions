#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    if(N % 2 == 1) cout << "still running\n";
    else {
        int ans = 0;
        for(int i=1; i<N; i+=2) ans += v[i] - v[i-1];

        cout << ans << "\n";
    }
}
