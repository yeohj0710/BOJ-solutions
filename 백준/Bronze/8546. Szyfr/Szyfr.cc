#include <bits/stdc++.h>
#define int long long
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    string ans = "";

    if(a <= 1) ans += '1';
    if(a <= 2) ans += '1';

    int x = 1, y = 1;

    for(int i=3; i<=b; i++) {
        int z = (x + y) % 10;

        x = y;
        y = z;

        if(i >= a) ans += char('0' + y);
    }

    cout << ans << "\n";
}
