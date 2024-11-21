#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        multiset<int> ms;

        while(n--) {
            char ch; cin >> ch;

            if(ch == 'I') {
                int x; cin >> x;

                ms.insert(x);
            }
            else if(ch == 'D') {
                int x; cin >> x;

                if(ms.size() == 0) continue;

                if(x == -1) ms.erase(ms.begin());
                else if(x == 1) ms.erase(--ms.end());
            }
        }

        if(ms.size() == 0) {
            cout << "EMPTY\n";
            continue;
        }

        cout << *(--ms.end()) << " " << *ms.begin() << "\n";
    }
}
