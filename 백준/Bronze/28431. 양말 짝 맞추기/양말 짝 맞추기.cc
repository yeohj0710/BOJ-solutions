#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(10);

    for(int i=0; i<5; i++) {
        int x; cin >> x;

        v[x]++;
    }

    for(int i=0; i<10; i++)
        if(v[i] % 2 == 1) cout << i << "\n";
}
