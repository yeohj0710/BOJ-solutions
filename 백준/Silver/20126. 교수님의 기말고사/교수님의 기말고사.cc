#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second) return a.second < b.second;
    else return a.first < b.first;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<pair<int, int>> v(N+2);
    for(int i=1; i<=N; i++) {
        int a, b; cin >> a >> b;
        v[i] = {a, a + b};
    }
    v[N+1] = {K, K};

    sort(v.begin(), v.end(), cmp);

    for(int i=1; i<=N+1; i++) {
        if(v[i].first - v[i-1].second >= M && v[i-1].second + M <= K) {
            cout << v[i-1].second << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";
}
