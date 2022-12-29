#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    deque<int> d;

    for(int i=0; i<N*2; i++) {
        int x; cin >> x;

        d.push_back(x);
    }

    deque<int> e;
    e.push_front(d.front());
    d.pop_front();

    int ans = 1;

    while(!d.empty()) {
        if(d.front() == e.front()) {
            d.pop_front();
            e.pop_front();
        }
        else {
            e.push_front(d.front());
            d.pop_front();
        }

        ans++;
    }

    if(e.empty()) cout << ans << "\n";
    else cout << "impossible\n";
}
