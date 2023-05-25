#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<bool> v(N);
    int ans = 0;

    for(int i=0; i<N; i++)
        if(i % 10 == 0 || i % 10 == 3 || i % 10 == 6) {
            v[i] = true;
            ans++;
        }

    while(M--) {
        int x; cin >> x;

        if(v[x-1]) v[x-1] = false, ans--;
        else v[x-1] = true, ans++;

        cout << ans << "\n";
    }
}
