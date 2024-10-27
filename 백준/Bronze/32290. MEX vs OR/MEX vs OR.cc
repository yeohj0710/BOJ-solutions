#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c; cin >> a >> b >> c;

    vector<bool> v(1002);

    for(int i=a; i<=b; i++) {
        v[i | c] = true;
    }

    for(int i=0; i<=1001; i++)
        if(!v[i]) {
            cout << i << "\n";
            break;
        }
}
