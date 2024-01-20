#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N), u(N);
    queue<int> q;

    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<N; i++) cin >> u[i];

    for(int i=N-1; i>=0; i--)
        if(v[i] == 0) q.push(u[i]);

    int M; cin >> M;

    for(int i=0; i<M; i++) {
        int x; cin >> x;

        q.push(x);
    }

    for(int i=0; i<M; i++) {
        int x = q.front(); q.pop();

        cout << x << " ";

        q.push(x);
    }
    cout << "\n";
}
