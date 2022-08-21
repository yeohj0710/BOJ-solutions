#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v;
    v.push_back(0);

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        v.push_back(x);
    }

    vector<int> u;

    for(int i=0; i<v.size(); i++)
        for(int j=0; j<v.size(); j++) u.push_back(v[i] + v[j]);

    vector<int> w(u);

    sort(u.begin(), u.end());
    sort(w.begin(), w.end());

    int ans = 0;

    for(int i=0; i<u.size(); i++) {
        int x = upper_bound(w.begin(), w.end(), M - u[i]) - w.begin();

        if(x == 0) continue;

        ans = max(ans, u[i] + w[x-1]);
    }

    cout << ans << "\n";
}
