#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    struct s { int a, b; };
    vector<s> v(n);

    for(int i=0; i<n; i++) cin >> v[i].a >> v[i].b;

    bool chk = true;

    for(int i=1; i<n; i++)
        if(v[i].a < v[i-1].a || v[i].b < v[i-1].b) chk = false;

    if(chk) cout << "yes\n";
    else cout << "no\n";
}
