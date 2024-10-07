#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    bool chk = true;
    int x = 0;

    while(n--) {
        int a, b; cin >> a >> b;

        if(a == 1) x += b;
        else if(a == 2) x -= b;

        if(x < 0) chk = false;
    }

    if(chk) cout << "See you next month\n";
    else cout << "Adios\n";
}
