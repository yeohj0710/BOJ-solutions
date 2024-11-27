#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<bool> v(101);

    for(int i=2; i<=9; i++)
        for(int j=1; j<=9; j++) v[i] = v[j] = v[i*j] = true;

    int x; cin >> x;

    if(v[x]) cout << 1 << "\n";
    else cout << 0 << "\n";
}
