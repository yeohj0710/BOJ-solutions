#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=0; i<3; i++) {
        int a1, b1, c1; cin >> a1 >> b1 >> c1;
        int a2, b2, c2; cin >> a2 >> b2 >> c2;

        int sum = a2*60*60 + b2*60 + c2 - a1*60*60 - b1*60 - c1;

        cout << sum/3600 << " " << (sum % 3600)/60 << " " << sum % 60 << "\n";
    }
}
