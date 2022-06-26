#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> v(N);

    for(int i=0; i<N; i++) {
        while(true) {
            int x; cin >> x;
            if(x == -1) break;

            v[i].push_back(x);
        }
    }

    int Max = 0;
    for(int i=0; i<N; i++) Max = max(Max, (int)v[i].size());

    for(int i=0; i<N; i++) {
        if(v[i].size() < Max) {
            while(v[i].size() < Max) v[i].push_back(0);
        }
    }

    for(int i=1; i<=Max; i++) {
        map<vector<int>, int> m;

        vector<vector<int>> u(N);
        for(int j=0; j<N; j++) {
            for(int k=0; k<i; k++) u[j].push_back(v[j][k]);

            m[u[j]]++;
        }

        bool check = true;
        for(int j=0; j<N; j++)
            if(m[u[j]] >= 2) check = false;

        if(check) {
            cout << i << "\n";
            break;
        }
    }
}
