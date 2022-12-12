#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    deque<pair<int, int>> d;

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        d.push_back({i, x});
    }

    while(N--) {
        cout << d.front().first << " ";

        int x = d.front().second;
        d.pop_front();

        if(x < 0) {
            while(x < 0) {
                d.push_front(d.back());
                d.pop_back();

                x++;
            }
        }
        else {
            x--;

            while(x > 0) {
                d.push_back(d.front());
                d.pop_front();

                x--;
            }
        }
    }
    cout << "\n";
}
