#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> u(v);
    sort(u.begin(), u.end());

    int ans = 0;

    while(true) {
        if(v == u) break;

        for(int i=0; i<N-M+1; i++)
            sort(v.begin()+i, v.begin()+i+M);

        ans++;
    }

    cout << ans << "\n";
}
