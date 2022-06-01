#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    while(M--) {
        int Q; cin >> Q;

        if(Q == 1) {
            int a, b; cin >> a >> b;

            int sum = 0;
            for(int i=a; i<=b; i++) sum += v[i];

            cout << sum << "\n";

            swap(v[a], v[b]);
        }
        else {
            int a, b, c, d; cin >> a >> b >> c >> d;

            int sum = 0;
            for(int i=a; i<=b; i++) sum += v[i];
            for(int i=c; i<=d; i++) sum -= v[i];

            cout << sum << "\n";
        }
    }
}
