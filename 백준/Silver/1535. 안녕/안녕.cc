#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, ans = 0;
vector<int> u, v;

void f(int a, int b, int idx) {
    if(idx == N) {
        if(a < 100) ans = max(ans, b);
        return;
    }

    f(a, b, idx+1);
    f(a+u[idx], b+v[idx], idx+1);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    u.resize(N);
    v.resize(N);

    for(int i=0; i<N; i++) cin >> u[i];
    for(int i=0; i<N; i++) cin >> v[i];

    f(0, 0, 0);

    cout << ans << "\n";
}
