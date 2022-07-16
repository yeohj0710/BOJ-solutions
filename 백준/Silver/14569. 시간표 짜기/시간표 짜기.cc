#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> v(N);
    for(int i=0; i<N; i++) {
        int x; cin >> x;
        for(int j=0; j<x; j++) {
            int y; cin >> y;
            v[i].push_back(y);
        }
    }

    int M; cin >> M;

    while(M--) {
        int x; cin >> x;

        vector<int> u(x);
        for(int i=0; i<x; i++) cin >> u[i];

        int ans = 0;
        for(int i=0; i<N; i++) {
            bool check = true;
            for(int j=0; j<v[i].size(); j++) {
                bool check2 = false;
                for(int k=0; k<u.size(); k++)
                    if(v[i][j] == u[k]) check2 = true;
                if(!check2) check = false;
            }

            if(check) ans++;
        }

        cout << ans << "\n";
    }
}
