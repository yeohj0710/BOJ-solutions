#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int a, b; cin >> a >> b;

        int x = a * 60 + b;

        x -= 45;

        if(x < 0) x += 24 * 60;

        cout << "Case #" << t << ": " << x / 60 << " " << x % 60 << "\n";
    }
}
