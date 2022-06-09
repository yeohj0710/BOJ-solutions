#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    cin.ignore();

    vector<char> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    vector<char> u(N+1);
    while(M--) {
        char c; cin >> c;
        int x; cin >> x;

        if(u[x] == NULL) u[x] = c;
        else if(u[x] == 'S') continue;
        else if(u[x] == 'M') {
            if(c == 'S') u[x] = c;
        }
        else if(u[x] == 'L') {
            if(c == 'M' || c == 'S') u[x] = c;
        }
    }

    int ans = 0;
    for(int i=1; i<=N; i++) {
        if(u[i] == NULL) continue;
        else if(u[i] == 'S') ans++;
        else if(u[i] == 'M') {
            if(v[i] == 'M' || v[i] == 'L') ans++;
        }
        else if(u[i] == 'L') {
            if(v[i] == 'L') ans++;
        }
    }

    cout << ans << "\n";
}
