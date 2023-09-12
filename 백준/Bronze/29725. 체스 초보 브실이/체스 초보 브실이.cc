#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<char> v = {'K', 'k', 'P', 'p', 'N', 'n', 'B', 'b', 'R', 'r', 'Q', 'q'};
    vector<int> u = {0, 0, 1, -1, 3, -3, 3, -3, 5, -5, 9, -9};

    int ans = 0;

    for(int i=0; i<8*8; i++) {
        char ch; cin >>ch;

        for(int j=0; j<v.size(); j++)
            if(ch == v[j]) ans += u[j];
    }

    cout << ans << "\n";
}
