#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b, c; cin >> a >> b >> c;

        int x = c;

        int v[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        for(int i=1; i<b; i++) x += v[i];

        if(b >= 3 && ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)) x++;

        cout << a << "/" << b << "/" << c << " became ";

        if(x > 13*28) cout << "a HOLIDAY\n";
        else cout << a << "/" << (x-1)/28 + 1 << "/" << (x-1)%28 + 1 << "\n";
    }
}
