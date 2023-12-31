#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<pair<string, int>> v(N);

    int val = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i].first >> v[i].second;

        if(v[i].first == "jinju") val = v[i].second;
    }

    int cnt = 0;

    for(int i=0; i<N; i++)
        if(v[i].second > val) cnt++;

    cout << val << "\n";
    cout << cnt << "\n";
}
