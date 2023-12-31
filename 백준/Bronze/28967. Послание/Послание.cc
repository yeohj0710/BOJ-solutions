#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string a, b; cin >> a >> b;

    int ans = 0, idx = 0;

    for(int i=0; i<b.length(); i++) {
        if(b[i] == a[idx % a.length()]) idx++;
    }

    cout << idx / a.length() << "\n";
}
