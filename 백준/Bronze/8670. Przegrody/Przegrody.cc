#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0, sum = 0;
    for(int i=0; i<N; i++) {
        sum += v[i];
        if(sum == (i+1)*(i+2)/2) ans++;
    }

    cout << ans << "\n";
}
