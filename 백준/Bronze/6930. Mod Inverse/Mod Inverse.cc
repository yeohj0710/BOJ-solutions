#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int a, b; cin >> a >> b;

    if(__gcd(a, b) != 1) {
        cout << "No such integer exists.\n";
        return 0;
    }

    for(int i=1; ; i++)
        if((a * i) % b == 1) {
            cout << i << "\n";
            break;
        }
}
