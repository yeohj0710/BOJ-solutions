#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(3);
    for(int i=0; i<3; i++) cin >> v[i];

    sort(v.begin(), v.end());

    cout << v[1] << "\n";
}
