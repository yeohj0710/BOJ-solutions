#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(int &x, int &y) {
    return abs(x) < abs(y);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int K, N; cin >> K >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    sort(v.begin(), v.end(), cmp);

    int dist = 0, ans = 0;
    for(int i=1; i<=N; i++) {
        dist += abs(v[i] - v[i-1]);

        if(dist <= K) ans++;
        else break;
    }

    cout << ans << "\n";
}
