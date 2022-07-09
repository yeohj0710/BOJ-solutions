#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<bool> v(31);

    for(int i=0; i<28; i++) {
        int x; cin >> x;
        v[x] = true;
    }

    for(int i=1; i<=30; i++)
        if(!v[i]) cout << i << "\n";
}
