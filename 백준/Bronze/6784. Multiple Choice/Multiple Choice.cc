#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<char> u(N), v(N);
    for(int i=0; i<N; i++) cin >> u[i];
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;
    for(int i=0; i<N; i++)
        if(u[i] == v[i]) ans++;

    cout << ans << "\n";
}
