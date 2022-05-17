#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, pair<int, int>> &a, pair<int, pair<int, int>> &b) {
    return (double)a.second.first/a.second.second > (double)b.second.first/b.second.second;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, pair<int, int>>> v(N);
    for(int i=0; i<N; i++) {
        int a, b; cin >> a >> b;
        v[i] = {i, {a, b}};
    }

    sort(v.begin(), v.end(), cmp);

    cout << v[0].second.second + v[1].second.second + v[2].second.second << "\n";
    cout << v[0].first+1 << "\n" << v[1].first+1 << "\n" << v[2].first+1 << "\n";
}
