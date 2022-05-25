#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int b; double w; cin >> b >> w;

        double sum = 0;

        while(b--) {
            double r; cin >> r;

            sum += 4.0/3.0 * M_PI * r * r * r;
        }

        sum /= 1000;

        cout << "Data Set " << t << ":\n";

        if(sum > w) cout << "Yes\n\n";
        else cout << "No\n\n";
    }
}
