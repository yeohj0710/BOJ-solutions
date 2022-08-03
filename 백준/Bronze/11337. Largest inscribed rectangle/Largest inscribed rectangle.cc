#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(3);

    int T; cin >> T;

    while(T--) {
        double R, B; cin >> R >> B;

        if(sqrt(2)*R <= B) cout << 2*R*R << "\n";
        else cout << B * sqrt(4*R*R - B*B) << "\n";
    }
}
