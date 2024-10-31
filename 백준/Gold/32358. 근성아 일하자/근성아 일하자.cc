#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    set<int> s;
    int cur = 0, ans = 0;

    while(n--) {
        int a; cin >> a;

        if(a == 1) {
            int b; cin >> b;

            s.insert(b);
        }
        else if(a == 2) {
            while(!s.empty()) {
                int x;
                auto nex = s.lower_bound(cur);

                if(nex == s.end()) x = *prev(nex);
                else if(nex == s.begin()) x = *nex;
                else {
                    auto pre = prev(nex);
                    if(cur - *pre <= *nex - cur) x = *pre;
                    else x = *nex;
                }

                ans += abs(cur - x);
                cur = x;
                s.erase(cur);
            }
        }
    }

    cout << ans << "\n";
}
