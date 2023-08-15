#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    while(N--) {
        int x; cin >> x;

        if(x == 300) cout << 1 << " ";
        else if(x >= 275) cout << 2 << " ";
        else if(x >= 250) cout << 3 << " ";
        else cout << 4 << " ";
    }
    cout << "\n";
}

