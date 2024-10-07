#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v;
    int x;

    while(cin >> x) {
        v.push_back(x);
    }

    for(int i=0; i<v.size(); i++) {
        if(v[i] >= n) break;

        n += v[i];
    }

    cout << n << "\n";
}
