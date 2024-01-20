#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    queue<int> q;
    for(int i=1; i<=N; i++) q.push(i);

    while(true) {
        if(q.size() <= M) {
            cout << q.front() << "\n";
            break;
        }

        q.push(q.front());
        q.pop();

        for(int i=0; i<M-1; i++) q.pop();
    }
}
