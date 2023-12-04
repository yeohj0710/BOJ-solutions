#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, x; cin >> N >> x;

    vector<int> v(N-1);
    for(int i=0; i<v.size(); i++) cin >> v[i];

    v.push_back(x);

    sort(v.begin(), v.end(), greater<int>());

    for(int i=0; i<v.size(); i++)
        if(v[i] == x) cout << i + 1 << "\n";
}
