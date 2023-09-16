#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int x; cin >> x;

    int ans = 0;
    vector<pair<int, int>> v;

    for(int i=-200; i<=200; i++)
        for(int j=-200; j<=200; j++) {
            int a, b;

            if(i > 0) a = abs(i) * 508;
            else a = abs(i) * 108;

            if(j > 0) b = abs(j) * 212;
            else b = abs(j) * 305;

            int res = (a + b) * 4763;

            if(res == x) v.push_back({abs(i), abs(j)});
        }

    sort(v.begin(), v.end());

    cout << v.size() << "\n";

    for(int i=0; i<v.size(); i++)
        cout << v[i].first << " " << v[i].second << "\n";
}
