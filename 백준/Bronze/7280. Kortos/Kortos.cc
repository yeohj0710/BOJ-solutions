#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str = "SBVK";

    vector<vector<bool>> v(4, vector<bool>(14));

    for(int i=0; i<51; i++) {
        char ch; int x; cin >> ch >> x;

        int idx = -1;

        for(int j=0; j<4; j++)
            if(str[j] == ch) idx = j;

        v[idx][x] = true;
    }

    for(int i=0; i<4; i++)
        for(int j=1; j<=13; j++)
            if(!v[i][j]) cout << str[i] << " " << j << "\n";
}
