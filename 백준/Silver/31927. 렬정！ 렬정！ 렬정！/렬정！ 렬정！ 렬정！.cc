#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    cout << n / 2 << "\n";

    for(int i=0; i<n/2; i++) {
        v[i] += 5000 * (n/2 - i);
        v[n-1-i] -= 5000 * (n/2 - i);

        for(int j=0; j<n; j++) cout << v[j] << " ";
        cout << "\n";
    }
}
