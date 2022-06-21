#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N), u(M);
    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<M; i++) cin >> u[i];

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    int i = 0, j = 0, ans = 0;
    while(i < N && j < M) {
        if(v[i] <= u[j]) {
            ans++;
            i++, j++;
        }
        else j++;
    }

    cout << ans << "\n";
}
