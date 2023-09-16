#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    queue<pair<int, int>> q;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        q.push({x, i+1});
    }

    while(q.size() > 1) {
        int M = q.front().first;

        M = (M % q.size()) + q.size();

        for(int i=0; i<M-1; i++) {
            q.push(q.front());
            q.pop();
        }

        q.pop();
    }

    cout << q.front().second << "\n";
}
