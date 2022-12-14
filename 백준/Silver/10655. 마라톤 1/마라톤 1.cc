#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    struct s { int x, y; };

    vector<s> v(N);
    for(int i=0; i<N; i++) cin >> v[i].x >> v[i].y;

    int sum = 0;

    for(int i=1; i<N; i++)
        sum += abs(v[i].x - v[i-1].x) + abs(v[i].y - v[i-1].y);

    int ans = INT_MAX;

    for(int i=1; i<N-1; i++) {
        int tmp = abs(v[i+1].x - v[i-1].x) + abs(v[i+1].y - v[i-1].y)
                   - (abs(v[i].x - v[i-1].x) + abs(v[i].y - v[i-1].y))
                   - (abs(v[i+1].x - v[i].x) + abs(v[i+1].y - v[i].y));

        ans = min(ans, sum + tmp);
    }

    cout << ans << "\n";
}
