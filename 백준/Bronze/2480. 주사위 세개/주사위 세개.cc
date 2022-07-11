#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(3);
    for(int i=0; i<3; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    if(v[0] == v[1] && v[1] == v[2]) cout << 10000 + v[0]*1000 << "\n";
    else if(v[0] == v[1] || v[1] == v[2]) cout << 1000 + v[1]*100 << "\n";
    else cout << v[0]*100 << "\n";
}
