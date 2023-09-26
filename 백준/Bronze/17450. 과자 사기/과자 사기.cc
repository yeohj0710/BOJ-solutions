#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<double> v(6);

    for(int i=0; i<6; i++) {
        cin >> v[i];

        if(i % 2 == 0 && v[i] >= 500) v[i] -= 50;
    }

    double idx = -1, mx = 0;

    for(int i=0; i<6; i+=2) {
        double val = v[i+1] / v[i];

        if(val > mx) {
            mx = val;
            idx = i / 2;
        }
    }

    if(idx == 0) cout << "S\n";
    else if(idx == 1) cout << "N\n";
    else cout << "U\n";
}
