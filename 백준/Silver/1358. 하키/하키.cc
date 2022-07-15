#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int W, H, X, Y, N;
    cin >> W >> H >> X >> Y >> N;

    int ans = 0;
    while(N--) {
        double x, y; cin >> x >> y;

        bool check = false;

        if(x >= X && x <= X+W && y >= Y && y <= Y+H) check = true;
        if(pow(x - X, 2) + pow(y - (Y+(H/2)), 2) <= pow(H/2, 2)) check = true;
        if(pow(x - (X+W), 2) + pow(y - (Y+(H/2)), 2) <= pow(H/2, 2)) check = true;

        if(check) ans++;
    }

    cout << ans << "\n";
}
