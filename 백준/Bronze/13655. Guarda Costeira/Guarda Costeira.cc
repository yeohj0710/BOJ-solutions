#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int D, VF, VG;

    while(cin >> D >> VF >> VG) {
        if(VF*VF*(D*D + 12*12) <= VG*VG*12*12) cout << "S\n";
        else cout << "N\n";
    }
}
