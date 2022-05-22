#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<vector<int>> v(N, vector<int>(N));

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) cin >> v[i][j];

        bool check = false;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(v[i][j] == 0) check = true;

        for(int i=0; i<N; i++)
            for(int j=0; j<N-1; j++) {
                if(v[i][j] == v[i][j+1]) check = true;
                if(v[j][i] == v[j+1][i]) check = true;
            }

        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
