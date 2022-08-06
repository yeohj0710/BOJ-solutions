#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        map<int, bool> m1, m2;

        vector<int> v(N), u(M);

        for(int i=0; i<N; i++) {
            cin >> v[i];

            m1[v[i]] = true;
        }

        for(int i=0; i<M; i++) {
            cin >> u[i];

            m2[u[i]] = true;
        }

        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        sort(u.begin(), u.end());
        u.erase(unique(u.begin(), u.end()), u.end());

        int a = 0, b = 0;

        for(int i=0; i<v.size(); i++)
            if(!m2[v[i]]) a++;

        for(int i=0; i<u.size(); i++)
            if(!m1[u[i]]) b++;

        cout << min(a, b) << "\n";
    }
}
