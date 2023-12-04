#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    for(int i=1; i<=a*b; i++) {
        if(i % a == 0 && i % b == 0) cout << 3;
        else if(i % a == 0) cout << 2;
        else if(i % b == 0) cout << 1;
    }
    cout << "\n";
}
