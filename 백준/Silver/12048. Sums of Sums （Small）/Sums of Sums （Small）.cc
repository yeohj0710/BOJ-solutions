#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ":\n";

        int N, M; cin >> N >> M;

        vector<int> v(N+1);
        for(int i=1; i<=N; i++) {
            int x; cin >> x;
            v[i] = v[i-1] + x;
        }

        vector<int> u;
        for(int i=0; i<=N; i++)
            for(int j=i+1; j<=N; j++) u.push_back(v[j] - v[i]);

        sort(u.begin(), u.end());

        vector<int> w(u.size() + 1);
        for(int i=1; i<=u.size(); i++) w[i] = w[i-1] + u[i-1];

        while(M--) {
            int a, b; cin >> a >> b;
            cout << w[b] - w[a-1] << "\n";
        }
    }
}
