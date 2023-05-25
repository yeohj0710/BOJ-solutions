#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        int N; cin >> N;

        vector<vector<int>> v(N, vector<int>(N));

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) cin >> v[i][j];

        int sum = 0;

        for(int i=0; i<N; i++) sum += v[i][i];

        cout << sum << " ";

        int cnt = 0;

        for(int i=0; i<N; i++) {
            bool check = false;

            for(int j=0; j<N; j++)
                for(int k=j+1; k<N; k++)
                    if(v[i][j] == v[i][k]) check = true;

            if(check) cnt++;
        }

        cout << cnt << " ";

        cnt = 0;

        for(int i=0; i<N; i++) {
            bool check = false;

            for(int j=0; j<N; j++)
                for(int k=j+1; k<N; k++)
                    if(v[j][i] == v[k][i]) check = true;

            if(check) cnt++;
        }

        cout << cnt << "\n";
    }
}
