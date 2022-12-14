#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M, ans = 0;
vector<int> v;

void f(int x, int idx, int time) {
    ans = max(ans, x);

    if(time == M) return;

    if(idx+1 <= N) f(x + v[idx+1], idx+1, time+1);
    if(idx+2 <= N) f(x/2 + v[idx+2], idx+2, time+1);
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    cin >> N >> M;

    v.resize(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    f(1, 0, 0);

    cout << ans << "\n";
}
