#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(6);

    for(int i=0; i<6; i++) cin >> v[i];

    int a = v[0] * 3 + v[1] * 20 + v[2] * 120;
    int b = v[3] * 3 + v[4] * 20 + v[5] * 120;

    if(a > b) cout << "Max\n";
    else if(a < b) cout << "Mel\n";
    else cout << "Draw\n";
}

