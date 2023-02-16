#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v;

    int x;

    while(cin >> x) v.push_back(x);

    int ans = 0;

    for(int i=0; i<v.size(); i++)
        for(int j=i+1; j<v.size(); j++)
            ans = max(ans, __gcd(v[i], v[j]));

    cout << ans << "\n";
}
