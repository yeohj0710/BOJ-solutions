#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c; cin >> a >> b >> c;

    for(int i=0; i<c/b; i++) {
        a /= 2;
        
        if(a == 0) break;
    }

    cout << a << "\n";
}
