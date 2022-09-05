#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M, K, ans = 0;
vector<int> v;

void f(int x) {
    if(x <= N) ans = max(ans, x);
    else return;

    for(int i=0; i<M; i++) f(x*10 + v[i]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    K = to_string(N).length();

    v.resize(M);
    for(int i=0; i<M; i++) cin >> v[i];

    f(0);

    cout << ans << "\n";
}
