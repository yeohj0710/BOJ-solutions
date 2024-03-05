#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    bool chk = true;

    for(int i=0; i<3; i++) {
        bool flag = false;

        for(int j=0; j<N; j++) {
            int x; cin >> x;

            if(x == 7) flag= true;
        }

        if(!flag) chk = false;
    }

    if(chk) cout << 777 << "\n";
    else cout << 0 << "\n";
}
