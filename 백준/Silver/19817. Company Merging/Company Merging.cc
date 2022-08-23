#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<priority_queue<int>> pq(N);
    int Max = 0;

    for(int i=0; i<N; i++) {
        int M; cin >> M;

        while(M--) {
            int x; cin >> x;

            pq[i].push(x);

            Max = max(Max, x);
        }
    }

    int ans = 0;

    for(int i=0; i<N; i++)
        ans += (Max - pq[i].top()) * pq[i].size();

    cout << ans << "\n";
}
