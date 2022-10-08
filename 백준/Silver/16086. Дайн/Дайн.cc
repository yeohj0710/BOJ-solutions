#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    vector<bool> u(N, true);
    for(int i=1; i<=N; i++) {
        int x = i - v[i];

        if(x < 0) x += N;

        u[x] = false;
    }

    for(int i=0; i<N; i++)
        if(u[i]) {
            cout << i << "\n";
            return 0;
        }

    cout << -1 << "\n";
}
