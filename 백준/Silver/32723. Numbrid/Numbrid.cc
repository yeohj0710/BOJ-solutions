#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vector<int> u;

    for(int i=1; i<v.size(); i++)
        for(int j=v[i-1]+1; j<v[i]; j++) u.push_back(j);

    cout << u.size() << "\n";

    for(int i=0; i<u.size(); i++) cout << u[i] << " ";
    cout << "\n";
}
