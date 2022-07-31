#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(2);

    while(true) {
        double N; cin >> N;
        if(N == 0) break;

        double ans = 0;
        for(int i=0; i<5; i++) ans += pow(N, i);

        cout << ans << "\n";
    }
}
