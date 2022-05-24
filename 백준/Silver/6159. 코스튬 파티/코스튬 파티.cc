#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, S; cin >> N >> S;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int ans = 0;
    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++) {
            if(v[i] + v[j] <= S) ans++;
            else break;
        }

    cout << ans << "\n";
}
