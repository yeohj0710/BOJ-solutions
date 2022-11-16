#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<double> v(8);
    for(int i=0; i<8; i++) cin >> v[i];

    vector<int> u(8);
    for(int i=0; i<8; i++) u[i] = i;

    int ans = 0;

    while(true) {
        bool check = true;

        for(int i=0; i<8; i++) {
            double a = v[u[(i-1+8)%8]];
            double b = v[u[(i+1)%8]];

            if(v[u[i]] < sqrt(2) * a * b / (a + b)) check = false;
        }

        if(check) ans++;

        if(!next_permutation(u.begin(), u.end())) break;
    }

    cout << ans << "\n";
}
