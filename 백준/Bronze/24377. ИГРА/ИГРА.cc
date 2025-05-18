#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(4);
    int cnt = 0, x = -1;

    unordered_map<int, bool> mp;

    for(int i=0; i<4; i++) {
        cin >> v[i];

        mp[v[i]] = true;

        if(v[i] == 0) cnt++, x = i + 1;
    }

    if(cnt == 0) {
        cout << v[0] << " " << v[1] << "\n";
    }
    else if(cnt == 1) {
        cout << x << " ";

        for(int i=1; i<=4; i++)
            if(!mp[i]) cout << i << "\n";
    }
    else {
        for(int i=1; i<=4; i++)
            if(!mp[i]) cout << i << " ";
            cout << "\n";
    }
}
