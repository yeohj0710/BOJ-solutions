#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int a, b, c, d, e, f, g;

        cin >> a >> b >> c >> d >> e >> f;
        int sum1 = a + b*2 + c*3 + d*3 + e*4 + f*10;

        cin >> a >> b >> c >> d >> e >> f >> g;
        int sum2 = a + b*2 + c*2 + d*2 + e*3 + f*5 + g*10;

        cout << "Battle " << t << ": ";

        if(sum1 > sum2) cout << "Good triumphs over Evil\n";
        else if(sum1 < sum2) cout << "Evil eradicates all trace of Good\n";
        else cout << "No victor on this battle field\n";
    }
}
