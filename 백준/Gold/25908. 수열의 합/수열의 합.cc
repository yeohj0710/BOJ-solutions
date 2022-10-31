#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int x = 0, y = 0;

    for(int i=1; i<=b; i++) {
        int tmp = b / i;

        if(i % 2 == 1) tmp *= (-1);

        x += tmp;
    }

    for(int i=1; i<a; i++) {
        int tmp = (a - 1) / i;

        if(i % 2 == 1) tmp *= (-1);

        y += tmp;
    }

    int ans = x - y;

    cout << ans << "\n";
}
