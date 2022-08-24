#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cur; cin >> cur;

    priority_queue<int> pq;

    for(int i=0; i<N-1; i++) {
        int x; cin >> x;

        pq.push(x);
    }

    if(N == 1) {
        cout << 0 << "\n";
        return 0;
    }

    int ans = 0;

    while(true) {
        if(cur > pq.top()) break;

        int x = pq.top();
        pq.pop();
        pq.push(x-1);

        cur++;
        ans++;
    }

    cout << ans << "\n";
}
