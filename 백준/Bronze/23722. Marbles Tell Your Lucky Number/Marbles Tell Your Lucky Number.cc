#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        vector<int> v(4);
        for(int i=0; i<4; i++) cin >> v[i];
        if(v[0] == 0 && v[1] == 0 && v[2] == 0 && v[3] == 0) break;

        while(true) {
            sort(v.begin(), v.end());
            if(v[0] == 0 && v[1] == 0 && v[2] == 0) {
                cout << v[3] << "\n";
                break;
            }

            if(v[0] != 0) {
                v[1] -= v[0];
                v[2] -= v[0];
                v[3] -= v[0];
            }
            else if(v[1] != 0) {
                v[2] -= v[1];
                v[3] -= v[1];
            }
            else {
                v[3] -= v[2];
            }
        }
    }
}
