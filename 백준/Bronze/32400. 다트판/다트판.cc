#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(20);
    int x;

    for(int i=0; i<20; i++) {
        cin >> v[i];

        if(v[i] == 20) x = i;
    }

    double y = ((double)v[(x - 1 + 20) % 20] + v[x] + v[(x + 1) % 20]) / 3;

    if(y > 10.5) cout << "Alice\n";
    else if(y < 10.5) cout << "Bob\n";
    else cout << "Tie\n";
}
