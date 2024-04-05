#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    deque<int> v, u;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(x == 1) v.push_back(i + 1);
        else u.push_back(i + 1);
    }

    int ans = 0;

    while(true) {
        if(v.size() == 0 && u.size() == 0) break;
        else if(v.size() == 0) u.pop_front();
        else if(u.size() == 0) v.pop_front();
        else {
            if(v.front() < u.front()) {
                if(u.front() - v.front() <= M - 1) u.pop_front();
                v.pop_front();
            }
            else if(u.front() < v.front()) {
                if(v.front() - u.front() <= M - 1) v.pop_front();
                u.pop_front();
            }
        }

        ans++;
    }

    cout << ans << "\n";
}
