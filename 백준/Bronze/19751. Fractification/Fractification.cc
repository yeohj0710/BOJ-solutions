#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<double> v(4);

    for(int i=0; i<4; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vector<double> u;
    double Min = INT_MAX;

    while(true) {
        if(v[0] / v[1] + v[2] / v[3] < Min) {
            Min = v[0] / v[1] + v[2] / v[3];

            u = v;
        }

        if(!next_permutation(v.begin(), v.end())) break;
    }

    for(int i=0; i<4; i++) cout << (int)u[i] << " ";
    cout << "\n";
}
