#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int w, l, h; cin >> w >> l >> h;

    if(min(w, l) >= h * 2 && max(w, l) <= min(w, l) * 2) cout << "good\n";
    else cout << "bad\n";
}
