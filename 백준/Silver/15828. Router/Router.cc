#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    queue<int> q;

    while(true) {
        int x; cin >> x;
        if(x == -1) break;

        if(x == 0) {
            q.pop();
            continue;
        }

        if(q.size() >= N) continue;

        q.push(x);
    }

    if(q.empty()) {
        cout << "empty\n";
        return 0;
    }

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
}
