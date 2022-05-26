#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        double x, y; cin >> x >> y;
        double d = sqrt(x*x + y*y);

        if(d <= 10) ans += 10;
        else if(d <= 30) ans += 9;
        else if(d <= 50) ans += 8;
        else if(d <= 70) ans += 7;
        else if(d <= 90) ans += 6;
        else if(d <= 110) ans += 5;
        else if(d <= 130) ans += 4;
        else if(d <= 150) ans += 3;
        else if(d <= 170) ans += 2;
        else if(d <= 190) ans += 1;
    }

    cout << ans << "\n";
}
