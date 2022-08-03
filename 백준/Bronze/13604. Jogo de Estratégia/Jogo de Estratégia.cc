#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);

    int Max = 0, ans;

    for(int i=0; i<M; i++)
        for(int j=1; j<=N; j++) {
            int x; cin >> x;

            v[j] += x;

            if(v[j] >= Max) {
                Max = v[j];
                ans = j;
            }
        }

    cout << ans << "\n";
}
