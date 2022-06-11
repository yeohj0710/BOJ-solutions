#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;
vector<vector<int>> u;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int S = sqrt(N); u.resize(N/S + 1);
    for(int i=0; i<N; i++) u[i/S].push_back(v[i]);

    for(int i=0; i<u.size(); i++) sort(u[i].begin(), u[i].end());

    int M; cin >> M;

    while(M--) {
        int Q; cin >> Q;

        if(Q == 1) {
            int l, r, val; cin >> l >> r >> val;
            l--, r--;

            int cnt = 0;

            while(l % S != 0 && l <= r)
                if(v[l++] > val) cnt++;

            while((r + 1) % S != 0 && l <= r)
                if(v[r--] > val) cnt++;

            while(l <= r) {
                cnt += u[l/S].end() - upper_bound(u[l/S].begin(), u[l/S].end(), val);
                l += S;
            }

            cout << cnt << "\n";
        }
        else if(Q == 2) {
            int idx, val; cin >> idx >> val;
            idx--;

            u[idx/S].erase(lower_bound(u[idx/S].begin(), u[idx/S].end(), v[idx]));
            u[idx/S].insert(lower_bound(u[idx/S].begin(), u[idx/S].end(), val), val);

            v[idx] = val;
        }
    }
}
