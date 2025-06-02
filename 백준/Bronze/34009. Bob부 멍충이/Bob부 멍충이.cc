#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    if(n % 2 == 1) {
        cout << "Bob\n";
        return 0;
    }

    sort(v.begin(), v.end());

    if(v[0] < v[n-1]) cout << "Alice\n";
    else cout << "Bob\n";
}
