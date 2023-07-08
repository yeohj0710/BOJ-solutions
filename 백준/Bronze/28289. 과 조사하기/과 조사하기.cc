#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    vector<int> v(4);

    while(T--) {
        int a, b, c; cin >> a >> b >> c;

        if(a == 1) v[3]++;
        else if(b <= 2) v[0]++;
        else if(b == 3) v[1]++;
        else v[2]++;
    }

    for(int i=0; i<4; i++) cout << v[i] << "\n";
}
