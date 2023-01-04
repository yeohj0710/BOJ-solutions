#include <bits/stdc++.h>
#define int long long
using namespace std;

// referred solution for study

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    stack<pair<int, int>> s;
    int ans = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        while(!s.empty() && s.top().first < x) {
            ans += s.top().second;
            s.pop();
        }

        int add = 1;

        if(!s.empty() && s.top().first == x) {
            ans += s.top().second;
            add += s.top().second;
            s.pop();
        }

        if(!s.empty()) ans++;

        s.push({x, add});
    }

    cout << ans << "\n";
}
