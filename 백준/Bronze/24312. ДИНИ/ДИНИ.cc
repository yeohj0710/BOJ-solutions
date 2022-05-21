#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(4);

    for(int i=0; i<4; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    if(v[0] >= v[1] + v[2] + v[3])
        cout << v[0] - v[1] - v[2] - v[3] << "\n";
    else if(abs(v[0] - v[1] - v[2] - v[3]) < abs(v[0] + v[3] - v[1] - v[2]))
        cout << abs(v[0] - v[1] - v[2] - v[3]) << "\n";
    else cout << abs(v[0] + v[3] - v[1] - v[2]) << "\n";
}
