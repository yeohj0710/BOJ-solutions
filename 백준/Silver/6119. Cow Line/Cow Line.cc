#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    deque<int> d;
    int cnt = 1;

    while(N--) {
        char a, b; cin >> a >> b;

        if(a == 'A') {
            if(b == 'L') d.push_front(cnt);
            else d.push_back(cnt);

            cnt++;
        }
        else {
            int x; cin >> x;

            for(int i=0; i<x; i++) {
                if(b == 'L') d.pop_front();
                else d.pop_back();
            }
        }
    }

    while(d.size() > 0) {
        cout << d.front() << "\n";

        d.pop_front();
    }
}
