#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v;

    while(N--) {
        int a, b; cin >> a >> b;

        vector<int> u(a);
        for(int i=0; i<a; i++) cin >> u[i];

        if(a < b) {
            v.push_back(1);
            continue;
        }

        sort(u.begin(), u.end(), greater<int>());

        v.push_back(u[b-1]);
    }

    sort(v.begin(), v.end());

    int ans = 0;

    for(int i=0; i<v.size(); i++) {
        if(v[i] > M) break;

        ans++;
        M -= v[i];
    }

    cout << ans << "\n";
}
