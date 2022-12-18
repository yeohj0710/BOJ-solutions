#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string a, b; cin >> a >> b;

    int i = 0, j = 0, cnt = 0;

    while(i < a.length() && j < b.length()) {
        if(cnt % 2 == 0) cout << a[i];
        else cout << b[j];

        i++, j++, cnt++;
    }
    cout << "\n";
}
