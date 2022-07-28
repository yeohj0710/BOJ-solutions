#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        vector<int> v(3);
        for(int i=0; i<3; i++) cin >> v[i];

        sort(v.begin(), v.end(), greater<int>());

        int x; cin >> x;

        if(v[0] - v[1] >= x) {
            cout << (v[0] - x) * v[1] * v[2] << "\n";
            continue;
        }

        x -= v[0] - v[1];
        v[0] = v[1];

        if((v[0] - v[2])*2 >= x) {
            cout << (v[0] - x/2) * (v[1] - (x - x/2)) * v[2] << "\n";
            continue;
        }

        x -= (v[0] - v[2]) * 2;
        v[0] = v[2];
        v[1] = v[2];

        v[0] -= x/3;
        v[1] -= x/3;
        v[2] -= x/3;

        if(x % 3 == 1) v[2]--;
        else if(x % 3 == 2) v[1]--, v[2]--;

        cout << v[0] * v[1] * v[2] << "\n";
    }
}
