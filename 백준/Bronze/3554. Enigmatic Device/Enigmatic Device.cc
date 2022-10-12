#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    int M; cin >> M;

    while(M--) {
        int Q, l, r; cin >> Q >> l >> r;

        if(Q == 1) {
            for(int i=l; i<=r; i++)
                v[i] = (v[i] * v[i]) % 2010;
        }
        else if(Q == 2) {
            int sum = 0;

            for(int i=l; i<=r; i++) sum += v[i];

            cout << sum << "\n";
        }
    }
}
