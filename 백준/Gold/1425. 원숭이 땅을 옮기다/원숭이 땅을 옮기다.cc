#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int x, y; };
vector<s> v;

int f(int m) {
    int Max = 0;

    for(int i=0; i<v.size(); i++)
        for(int j=i+1; j<v.size(); j++) {
            int x;

            if(v[i].x == v[j].x) x = abs(v[i].y - v[j].y);
            else x = abs(v[i].y - m) + abs(v[j].y - m) + abs(v[i].x - v[j].x);

            Max = max(Max, x);
        }

    return Max;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i].x >> v[i].y;

    int l = -1e9, r = 1e9, tr = 1e2;

    while(tr--) {
        int m1 = (l*2 + r) / 3;
        int m2 = (l + r*2) / 3;

        if(f(m1) > f(m2)) l = m1;
        else r = m2;
    }

    int ans = LLONG_MAX;

    for(int i=l; i<=r; i++) ans = min(ans, f(i));

    cout << ans << "\n";
}
