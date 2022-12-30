#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int x, y; };

bool cmpx(s a, s b) {
    if(a.x != b.x) return a.x < b.x;
    else return a.y < b.y;
}

bool cmpy(s a, s b) {
    if(a.y != b.y) return a.y < b.y;
    else return a.x < b.x;
}

int dis(s a, s b) {
    return pow(a.x - b.x, 2) + pow(a.y - b.y, 2);
}

vector<s> v;

int f(int l, int r) {
    if(l == r) return LLONG_MAX;
    if(l+1 == r) return dis(v[l], v[r]);

    int m = (l + r) / 2;
    int Min = min({dis(v[l], v[r]), f(l, m), f(m+1, r)});

    vector<s> u;
    int cen = v[m].x;

    for(int i=l; i<=r; i++)
        if(pow(v[i].x - cen, 2) < Min) u.push_back(v[i]);

    sort(u.begin(), u.end(), cmpy);

    for(int i=0; i<u.size(); i++)
        for(int j=i+1; j<u.size(); j++) {
            if(pow(u[i].y - u[j].y, 2) >= Min) break;

            if(pow(u[i].x - u[j].x, 2) < Min) Min = min(Min, dis(u[i], u[j]));
        }

    return Min;
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i].x >> v[i].y;

    sort(v.begin(), v.end(), cmpx);

    int ans = f(0, N-1);

    cout << ans << "\n";
}
