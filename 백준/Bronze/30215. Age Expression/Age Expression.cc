#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c; cin >> a >> b >> c;

    bool chk = false;

    for(int i=1; i*b<=a; i++)
        for(int j=1; i*b+j*c<=a; j++)
            if(i*b + j*c == a) chk = true;

    if(chk) cout << 1 << "\n";
    else cout << 0 << "\n";
}
