#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        if(a.first != b.first) return a.first > b.first;
        return a.second < b.second;
    });

    cout << v[0].first << " " << v[0].second << " ";
    cout << v[1].first << " " << v[1].second << "\n";

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        if(a.second != b.second) return a.second < b.second;
        return a.first > b.first;
    });

    cout << v[0].first << " " << v[0].second << " ";
    cout << v[1].first << " " << v[1].second << "\n";
}
