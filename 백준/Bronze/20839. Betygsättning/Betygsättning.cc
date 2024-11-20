#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(6);
    for(int i=0; i<6; i++) cin >> v[i];

    int ans = 0;

    if(v[0] == v[3] && v[1] == v[4] && v[2] == v[5]) ans = 1;
    else if(v[0] <= v[3] * 2 && v[1] == v[4] && v[2] == v[5]) ans = 2;
    else if(v[1] == v[4] && v[2] == v[5]) ans = 3;
    else if(v[1] <= v[4] * 2 && v[2] == v[5]) ans = 4;
    else if(v[2] == v[5]) ans = 5;

    cout << char('A' - 1 + ans) << "\n";
}
