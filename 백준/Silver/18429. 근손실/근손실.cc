#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M, ans = 0;
vector<int> v;
vector<bool> vis;

void f(int cnt, int cur) {
    if(cnt == N) {
        ans++;
        return;
    }

    for(int i=0; i<N; i++) {
        if(!vis[i] && cur + v[i] - M >= 500) {
            vis[i] = true;
            f(cnt + 1, cur + v[i] - M);
            vis[i] = false;
        }
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vis.resize(N);

    f(0, 500);

    cout << ans << "\n";
}
