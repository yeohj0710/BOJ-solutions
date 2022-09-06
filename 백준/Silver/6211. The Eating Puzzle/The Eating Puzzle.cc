#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M, ans = 0;
vector<int> v;

void f(int idx, int sum) {
    if(idx == N) {
        if(sum <= M) ans = max(ans, sum);
        return;
    }

    f(idx + 1, sum);
    f(idx + 1, sum + v[idx]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> M >> N;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    f(0, 0);

    cout << ans << "\n";
}
