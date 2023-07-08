#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    deque<int> d;

    while(N--) {
        int x; cin >> x;

        if(x == 1) {
            int y; cin >> y;

            d.push_front(y);
        } else if(x == 2) {
            int y; cin >> y;

            d.push_back(y);
        } else if(x == 3) {
            if(d.empty()) cout << -1 << "\n";
            else {
                cout << d.front() << "\n";
                d.pop_front();
            }
        } else if(x == 4) {
            if(d.empty()) cout << -1 << "\n";
            else {
                cout << d.back() << "\n";
                d.pop_back();
            }
        } else if(x == 5) {
            cout << d.size() << "\n";
        } else if(x == 6) {
            if(d.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if(x == 7) {
            if(d.empty()) cout << -1 << "\n";
            else cout << d.front() << "\n";
        } else {
            if(d.empty()) cout << -1 << "\n";
            else cout << d.back() << "\n";
        }
    }
}
