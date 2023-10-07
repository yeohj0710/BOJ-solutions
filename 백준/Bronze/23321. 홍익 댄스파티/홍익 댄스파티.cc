#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string> v(5), u = {".omln", "owln.", "..oLn"};

    for(int i=0; i<5; i++) cin >> v[i];

    vector<string> w;

    for(int i=0; i<v[0].length(); i++) {
        if(v[1][i] == 'o') w.push_back(u[1]);
        else if(v[1][i] == 'w') w.push_back(u[0]);
        else w.push_back(u[2]);
    }

    for(int i=0; i<5; i++) {
        for(int j=0; j<w.size(); j++) cout << w[j][i];
        cout << "\n";
    }
}
