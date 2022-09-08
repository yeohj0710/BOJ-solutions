#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int x, y, e; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<s> v(N+1);
    for(int i=0; i<=N; i++)
        cin >> v[i].x >> v[i].y >> v[i].e;

    int ans = 0;

    for(int i=1; i<=N; i++) {
        int sum = max(v[0].e - (abs(v[0].x - v[i].x) + abs(v[0].y - v[i].y)), (int)0);

        for(int j=1; j<=N; j++)
            sum -= max(v[j].e - (abs(v[i].x - v[j].x) + abs(v[i].y - v[j].y)), (int)0);

        ans = max(ans, sum);
    }

    if(ans > 0) cout << ans << "\n";
    else cout << "IMPOSSIBLE\n";
}
