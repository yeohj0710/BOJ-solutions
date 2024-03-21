#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<vector<string>> v(10, vector<string>(10));

    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++) cin >> v[i][j];

    bool chk = false;

    for(int i=0; i<10; i++) {
        bool flag = true;

        for(int j=0; j<10; j++)
            if(v[i][j] != v[i][0]) flag = false;

        if(flag) chk = true;

        flag = true;

        for(int j=0; j<10; j++)
            if(v[j][i] != v[0][i]) flag = false;

        if(flag) chk = true;
    }

    if(chk) cout << 1 << "\n";
    else cout << 0 << "\n";
}
