#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=N-1; j>i; j--)
            if(v[j-1] > v[j]) {
                swap(v[j-1], v[j]);
                ans++;
            }

    cout << ans << "\n";
}
