#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    int x = v[0];

    sort(v.begin(), v.end());

    if(x == v[0]) cout << "ez\n";
    else if(x == v[n-1]) cout << "hard\n";
    else cout << "?\n";
}
