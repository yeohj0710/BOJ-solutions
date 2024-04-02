#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(12), u(12);

    for(int i=0; i<18; i++) {
        int x; cin >> x;

        v[11] += x;
        v[x]++;
    }

    for(int i=0; i<18; i++) {
        int x; cin >> x;

        u[11] += x;
        u[x]++;
    }

    for(int i=11; i>=0; i--) {
        if(v[i] != u[i]) {
            if(v[i] > u[i]) cout << "Algosia\n";
            else if(v[i] < u[i]) cout << "Bajtek\n";

            return 0;
        }
    }

    cout << "remis\n";
}
