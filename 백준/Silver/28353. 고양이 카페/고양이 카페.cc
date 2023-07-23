#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int i = 0, j = N-1, ans = 0;

    while(i < j) {
        if(v[i] + v[j] <= M) {
            ans++;
            i++, j--;
        }
        else if(v[i] + v[j] > M) j--;
    }

    cout << ans << "\n";
}
