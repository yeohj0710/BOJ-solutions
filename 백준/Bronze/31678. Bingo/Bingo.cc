#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<vector<vector<int>>> v(N, vector<vector<int>>(5, vector<int>(5)));
    vector<string> u(N);

    for(int i=0; i<N; i++) {
        cin >> u[i];

        for(int j=0; j<5; j++)
            for(int k=0; k<5; k++) cin >> v[i][j][k];
    }

    int M; cin >> M;

    unordered_map<int, bool> m;

    while(M--) {
        int x; cin >> x;

        m[x] = true;
    }

    vector<string> ans;

    for(int i=0; i<N; i++) {
        bool chk = false;

        for(int j=0; j<5; j++) {
            bool flag = true;

            for(int k=0; k<5; k++)
                if(!m[v[i][j][k]]) flag = false;

            if(flag) chk = true;

            flag = true;

            for(int k=0; k<5; k++)
                if(!m[v[i][k][j]]) flag = false;

            if(flag) chk = true;
        }

        bool flag = true;

        for(int j=0; j<5; j++)
            if(!m[v[i][j][j]]) flag = false;

        if(flag) chk = true;

        flag = true;

        for(int j=0; j<5; j++)
            if(!m[v[i][j][4-j]]) flag = false;

        if(flag) chk = true;

        if(chk) ans.push_back(u[i]);
    }

    cout << ans.size() << "\n";

    for(int i=0; i<ans.size(); i++) cout << ans[i] << "\n";
}
