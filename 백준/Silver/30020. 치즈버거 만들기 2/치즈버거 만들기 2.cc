#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    if(a > b * 2 || a <= b) {
        cout << "NO\n";

        return 0;
    }

    cout << "YES\n";

    vector<int> v;

    while(a > b + 1) {
        v.push_back(1);
        a -= 2;
        b--;
    }

    v.push_back(b);

    cout << v.size() << "\n";

    for(int i=0; i<v.size(); i++) {
        for(int j=0; j<v[i]; j++) cout << "ab";
        cout << "a\n";
    }
}
