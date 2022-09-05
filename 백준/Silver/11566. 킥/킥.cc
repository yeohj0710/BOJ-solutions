#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int M; cin >> M;

    vector<int> u(M);
    for(int i=0; i<M; i++) cin >> u[i];

    int Min = INT_MAX, Max = INT_MIN;

    for(int i=0; i<M; i++) {
        for(int j=1; j<=M; j++) {
            bool check = true;
            int cnt = 0;

            for(int k=i; k<M; k+=j) {
                if(u[k] != v[cnt]) check = false;

                cnt++;
                if(cnt == N) break;
            }

            if(check && cnt == N) {
                Min = min(Min, j-1);
                Max = max(Max, j-1);
            }
        }
    }

    if(Min == INT_MAX && Max == INT_MIN) cout << -1 << "\n";
    else cout << Min << " " << Max << "\n";
}
