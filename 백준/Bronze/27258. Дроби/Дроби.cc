#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return (double)a.second / a.first < (double)b.second / b.first;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, p, q; cin >> N >> p >> q;

    vector<pair<int, int>> v;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=i; j++)
            if(1.0 / p < (double)j / i && (double)j / i < 1.0 / q)
                v.push_back({i / __gcd(i, j), j / __gcd(i, j)});

    sort(v.begin(), v.end(), cmp);
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i=0; i<v.size(); i++)
        cout << v[i].second << "/" << v[i].first << "\n";
}
