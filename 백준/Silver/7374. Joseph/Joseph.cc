#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v = {2, 7, 5, 30, 169, 441, 1872, 7632, 1740, 93313, 459901, 1358657, 2504881};

    while(true) {
        int x; cin >> x;

        if(x == 0) break;

        cout << v[x-1] << "\n";
    }
}
