#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int l = 0, r = N-1, ans = 0;

    while(l < r) {
        int sum = v[l] + v[r];

        if(sum == M) {
            ans++;

            if(v[l] == v[r]) l++;
            else l++, r--;
        }
        else if(sum < M) l++;
        else r--;
    }

    cout << ans << "\n";
}
