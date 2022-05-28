#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int g = 0, x = 0; };

bool cmp(s &a, s &b) { return a.x < b.x; }

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<s> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i].g >> v[i].x;

    sort(v.begin(), v.end(), cmp);

    for(int i=1; i<=N; i++) v[i].g += v[i-1].g;

    int i = 1, j = 1, ans = 0;

    while(j <= N) {
        if(v[j].x - v[i].x > M*2) {
            i++;
            if(i > j) j++;
        }
        else {
            ans = max(ans, v[j].g - v[i-1].g);
            j++;
        }
    }

    cout << ans << "\n";
}
