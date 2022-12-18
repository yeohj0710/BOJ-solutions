#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        for(int i=1; i<=b; i++) {
            if(i % 7 == 0) a--;
            if(i % 4 == 0) a++;
        }

        cout << a << "\n";
    }
}
