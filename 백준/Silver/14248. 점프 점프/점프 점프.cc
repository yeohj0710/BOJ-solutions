#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, ans = 0;
vector<int> v;
vector<bool> vis;

void f(int x) {
    vis[x] = true;
    ans++;

    if(x - v[x] >= 1 && !vis[x - v[x]]) f(x - v[x]);
    if(x + v[x] <= N && !vis[x + v[x]]) f(x + v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    int x; cin >> x;

    vis.resize(N+1);

    f(x);

    cout << ans << "\n";
}
