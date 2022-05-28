#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a[16], b[16], c[16];

    for(int i=0; i<16; i++) cin >> a[i] >> b[i] >> c[i];

    int x, y, z;

    while(cin >> x >> y >> z) {
        int Min = INT_MAX, ans;

        for(int i=0; i<16; i++) {
            int val = pow(a[i]-x, 2) + pow(b[i]-y, 2) + pow(c[i]-z, 2);

            if(val < Min) {
                Min = val;
                ans = i;
            }
        }

        printf("%3d %3d %3d maps to %3d %3d %3d\n", x, y, z, a[ans], b[ans], c[ans]);
    }
}
