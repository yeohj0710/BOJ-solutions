#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        stack<int> s;

        for(int i=N; i>=1; i--) s.push(i);

        while(M--) {
            int x; cin >> x;

            s.push(x);
        }

        int cnt = 0;
        vector<bool> v(N+1);

        while(cnt < N-1) {
            if(!v[s.top()]) cnt++;

            v[s.top()] = true;
            s.pop();
        }

        for(int i=1; i<=N; i++)
            if(!v[i]) {
                cout << i << "\n";
                break;
            }
    }
}
