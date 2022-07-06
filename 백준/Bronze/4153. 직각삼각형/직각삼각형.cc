#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        vector<int> v(3);
        for(int i=0; i<3; i++) cin >> v[i];

        if(v[0] == 0 && v[1] == 0 && v[2] == 0) break;

        sort(v.begin(), v.end());

        if(v[0]*v[0] + v[1]*v[1] == v[2]*v[2]) cout << "right\n";
        else cout << "wrong\n";
    }
}
