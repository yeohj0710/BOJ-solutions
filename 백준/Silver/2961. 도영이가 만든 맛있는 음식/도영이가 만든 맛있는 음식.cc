#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, ans = INT_MAX;
vector<pair<int, int>> v;

void f(int idx, int cnt, int a, int b) {
    if(idx == N) {
        if(cnt == 0) return;

        ans = min(ans, abs(a - b));
        return;
    }

    f(idx+1, cnt, a, b);
    f(idx+1, cnt+1, a*v[idx].first, b+v[idx].second);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    f(0, 0, 1, 0);

    cout << ans << "\n";
}
