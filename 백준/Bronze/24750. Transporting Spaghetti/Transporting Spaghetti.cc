#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d; cin >> a >> b >> c >> d;

    for(int i=0; i<=2000; i++)
        for(int j=0; j<=2000; j++) {
            if(i*a - j*b == d && j*b >= c) {
                if(i == 1 && j == 1) cout << "We need " << i << " truck and " << j << " boat.\n";
                else if(i == 1) cout << "We need " << i << " truck and " << j << " boats.\n";
                else if(j == 1) cout << "We need " << i << " trucks and " << j << " boat.\n";
                else cout << "We need " << i << " trucks and " << j << " boats.\n";
                return 0;
            }
        }

    cout << "No solution.\n";
}
