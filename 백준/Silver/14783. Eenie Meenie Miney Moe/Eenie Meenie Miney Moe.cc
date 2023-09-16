#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(M);
    for(int i=0; i<M; i++) cin >> v[i];

    queue<int> q;
    for(int i=1; i<=N; i++) q.push(i);

    for(int i=0; i<N-1; i++) {
        for(int j=0; j<v[i % M]-1; j++) {
            q.push(q.front());
            q.pop();
        }
        q.pop();
    }

    cout << q.front() << "\n";
}
