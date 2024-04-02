#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    struct s { int a, b; };

    vector<s> v(3);

    for(int i=0; i<3; i++)
        cin >> v[i].a >> v[i].b;

    int x; cin >> x;

    for(int i=0; ; i++) {
        for(int j=0; j<3; j++) {
            if(i % v[j].a == 0) x -= v[j].b;
        }

        if(x <= 0) {
            cout << i << "\n";
            return 0;
        }
    }
}
