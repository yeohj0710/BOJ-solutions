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

    vector<int> v(N), u(N);
    for(int i=0; i<N; i++) {
        double x; cin >> x;

        int y = x * 1e6;

        v[i] = u[i] = y;
    }

    sort(u.begin(), u.end());
    u.erase(unique(u.begin(), u.end()), u.end());

    vector<int> w(N);
    for(int i=0; i<v.size(); i++)
        w[i] = lower_bound(u.begin(), u.end(), v[i]) - u.begin();

    vector<vector<int>> vv(1e4 + 1);

    for(int i=0; i<N; i++) vv[w[i]].push_back(i);

    while(M--) {
        int l, r; cin >> l >> r;

        l--, r--;

        bool check = false;

        for(int i=0; i<100; i++) {
            int x = w[l + (rd() % (r-l+1))];

            int cnt = upper_bound(vv[x].begin(), vv[x].end(), r) - lower_bound(vv[x].begin(), vv[x].end(), l);

            if(cnt > (r-l+1)/2) {
                cout << "usable\n";

                check = true;
                break;
            }
        }

        if(!check) cout << "unusable\n";
    }
}
