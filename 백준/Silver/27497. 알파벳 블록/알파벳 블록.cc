#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    struct s { char a; int b; };
    deque<s> d;
    int cnt = 1;

    while(N--) {
        int x; cin >> x;

        if(x == 1) {
            char ch; cin >> ch;

            d.push_back({ch, cnt});
            cnt++;
        }
        else if(x == 2) {
            char ch; cin >> ch;

            d.push_front({ch, cnt});
            cnt++;
        }
        else {
            if(d.size() == 0) continue;

            if(d.front().b > d.back().b) d.pop_front();
            else d.pop_back();
        }
    }

    if(d.size() > 0) {
        while(d.size() > 0) {
            cout << d.front().a;

            d.pop_front();
        }
        cout << "\n";
    }
    else cout << 0 << "\n";
}
