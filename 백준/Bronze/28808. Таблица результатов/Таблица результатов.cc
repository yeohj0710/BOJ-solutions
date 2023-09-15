#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int ans = 0;

    while(N--) {
        bool chk = false;

        for(int i=0; i<M; i++) {
            char ch; cin >> ch;

            if(ch == '+') chk = true;
        }

        if(chk) ans++;
    }

    cout << ans << "\n";
}
