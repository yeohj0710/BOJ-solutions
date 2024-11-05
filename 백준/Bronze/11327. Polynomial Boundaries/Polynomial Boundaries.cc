#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int n; cin >> n;

        if(n == 0) break;

        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        int x, y; cin >> x >> y;

        int fx = 0;

        for(int i=0; i<n; i++)
            fx += v[i] * pow(x, i);

        if(y < fx) cout << "Inside\n";
        else if(y == fx) cout << "On\n";
        else if(y > fx) cout << "Outside\n";
    }
}
