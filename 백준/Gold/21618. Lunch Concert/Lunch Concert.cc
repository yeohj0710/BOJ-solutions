#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int x, t, r; };

int f(vector<s> v, int m) {
    int sum = 0;

    for(int i=0; i<v.size(); i++) {
        if(v[i].x - v[i].r <= m && m <= v[i].x + v[i].r) continue;
        else if(m < v[i].x - v[i].r) sum += ((v[i].x - v[i].r) - m) * v[i].t;
        else if(m > v[i].x + v[i].r) sum += (m - (v[i].x + v[i].r)) * v[i].t;
    }

    return sum;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<s> v(N);
    for(int i=0; i<N; i++) cin >> v[i].x >> v[i].t >> v[i].r;

    int l = 0, r = 1e9, tr = 1e2;

    while(tr--) {
        int m1 = (l*2 + r) / 3;
        int m2 = (l + r*2) / 3;

        int a = f(v, m1);
        int b = f(v, m2);

        if(a > b) l = m1;
        else r = m2;
    }

    int m = (l + r) / 2;
    int ans = f(v, m);

    cout << ans << "\n";
}
