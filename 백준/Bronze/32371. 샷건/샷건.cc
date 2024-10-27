#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string> v(4);
    for(int i=0; i<4; i++) cin >> v[i];

    string s; cin >> s;

    for(int i=1; i<=2; i++) {
        for(int j=1; j<v[i].size()-1; j++) {
            bool chk = true;

            for(int k=i-1; k<=i+1; k++)
                for(int l=j-1; l<=j+1; l++)
                    if(s.find(v[k][l]) >= s.size()) chk = false;

            if(chk) {
                cout << v[i][j];
                return 0;
            }
        }
    }
}
