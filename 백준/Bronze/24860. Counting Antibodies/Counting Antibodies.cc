#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(7);
    for(int i=0; i<7; i++) cin >> v[i];

    cout << (v[0]*v[1] + v[2]*v[3]) * (v[4]*v[5]*v[6]) << "\n";
}
