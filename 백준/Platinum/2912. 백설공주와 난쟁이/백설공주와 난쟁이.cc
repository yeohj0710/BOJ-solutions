#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    mt19937 mt((unsigned int)time(NULL));
    uniform_int_distribution<int> uid(0, INT_MAX);
    auto rd = bind(uid, mt);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    vector<vector<int>> u(M+1);

    for(int i=1; i<=N; i++) {
        cin >> v[i];

        u[v[i]].push_back(i);
    }

    int K; cin >> K;

    while(K--) {
        int l, r; cin >> l >> r;

        bool check = false;

        for(int i=0; i<100; i++) {
            int x = v[l + (rd() % (r-l+1))];

            int cnt = upper_bound(u[x].begin(), u[x].end(), r) - lower_bound(u[x].begin(), u[x].end(), l);

            if(cnt > (r-l+1)/2) {
                cout << "yes " << x << "\n";

                check = true;
                break;
            }
        }

        if(!check) cout << "no\n";
    }
}
