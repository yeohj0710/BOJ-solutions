#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    vector<int> u(N-2);
    for(int i=0; i<N-2; i++) u[i] = i + 1;

    while(true) {
        vector<int> w(v);

        int sum = 0;

        for(int i=0; i<u.size(); i++) {
            w[u[i]] = 0;

            int cur = u[i], a = 0, b = 0;

            while(w[cur] == 0) cur--;
            a = w[cur];

            cur = u[i];

            while(w[cur] == 0) cur++;
            b = w[cur];

            sum += a * b;
        }

        ans = max(ans, sum);

        if(!next_permutation(u.begin(), u.end())) break;
    }

    cout << ans << "\n";
}
