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

    for(int i=0; i<N-2; i++)
        for(int j=i+1; j<N-1; j++) {
            int key = -(v[i] + v[j]);
            ans += upper_bound(v.begin()+j+1, v.end(), key) 
                   - lower_bound(v.begin()+j+1, v.end(), key);
        }

    cout << ans << "\n";
}
