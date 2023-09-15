#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(4);
    for(int i=0; i<4; i++) cin >> v[i];

    if(v[0] == v[3] && v[1] == v[2]) {
        cout << "JAH\n";
        cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << "\n";
    }
    else if(v[0] == v[3]) {
        cout << "JAH\n";
        cout << v[0] << " " << v[1] << " " << v[1] << " " << v[3] << "\n";
    }
    else if(v[1] == v[2]) {
        cout << "JAH\n";
        cout << v[0] << " " << v[1] << " " << v[2] << " " << v[0] << "\n";
    }
    else cout << "EI\n";
}
