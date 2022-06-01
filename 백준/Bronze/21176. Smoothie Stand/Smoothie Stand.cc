#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;
    while(M--) {
        int x = INT_MAX;
        for(int i=0; i<N; i++) {
            int y; cin >> y;

            if(y != 0) x = min(x, v[i]/y);
        }

        int z; cin >> z;
        ans = max(ans, x*z);
    }

    cout << ans << "\n";
}
