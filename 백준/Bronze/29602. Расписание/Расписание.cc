#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<pair<int, int>> v(N);

    for(int i=0; i<N; i++) {
        cin >> v[i].first;

        v[i].second = i + 1;
    }

    sort(v.begin(), v.end());

    for(int i=0; i<N; i++) cout << v[i].second << " ";
    cout << "\n";
}
