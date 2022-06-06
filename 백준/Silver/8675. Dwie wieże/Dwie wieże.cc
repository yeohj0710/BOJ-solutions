#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+1), u(M+1);

    for(int i=1; i<=N; i++) {
        int x; cin >> x;
        v[i] = v[i-1] + x;
    }

    for(int i=1; i<=M; i++) {
        int x; cin >> x;
        u[i] = u[i-1] + x;
    }

    int i = N, j = M, ans = 0;
    bool check = false;

    while(i >= 0 && j >= 0) {
        if(v[i] == u[j]) {
            cout << ans << "\n";
            check = true;
            break;
        }

        if(v[i] > u[j]) {
            i--;
            ans++;
        }
        else if(v[i] < u[j]) {
            j--;
            ans++;
        }
    }

    if(!check) cout << N + M << "\n";
}
