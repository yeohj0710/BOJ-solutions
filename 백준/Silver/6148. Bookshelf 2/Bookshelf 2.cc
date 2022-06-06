#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<int> v;
int ans = INT_MAX;

void f(int cnt, int sum) {
    if(cnt == N) {
        if(sum >= M) ans = min(ans, sum - M);
        return;
    }

    f(cnt + 1, sum + v[cnt]);
    f(cnt + 1, sum);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    f(0, 0);

    cout << ans << "\n";
}
