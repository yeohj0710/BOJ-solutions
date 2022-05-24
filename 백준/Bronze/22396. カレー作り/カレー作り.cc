#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        double a, b, c, d; cin >> a >> b >> c >> d;
        if(a == 0 && b == 0 && c == 0 && d == 0) break;

        for(int i=0; ; i++)
            if((a + i*d)/b >= c) {
                cout << i << "\n";
                break;
            }
    }
}
