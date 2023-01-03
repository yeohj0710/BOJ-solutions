#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(pair<int, int> &x, pair<int, int> &y) {
    return (double)x.first / x.second < (double)y.first / y.second;
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    unordered_map<int, unordered_map<int, bool>> m;
    vector<pair<int, int>> v;

    for(int i=1; i<=N; i++)
        for(int j=0; j<=i; j++) {
            int a = i, b = j, gcd = __gcd(i, j);

            a /= gcd, b /= gcd;

            if(m[b][a]) continue;

            m[b][a] = true;
            v.push_back({b, a});
        }

    sort(v.begin(), v.end(), cmp);

    cout << v.size() << "\n";

    for(int i=0; i<v.size(); i++)
        cout << v[i].first << "/" << v[i].second << "\n";
}
