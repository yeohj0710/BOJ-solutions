#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    int val = 0, l = 1;

    for(int i=1; i<=N; i++) {
        if((M | v[i]) == M) {
            val |= v[i];

            if(val == M) {
                cout << l << " " << i << "\n";
                return 0;
            }
        }
        else {
            l = i+1;
            val = 0;
        }
    }

    cout << -1 << "\n";
}
