#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<char>> v;

int f() {
    int Max = 0, N = v.size();

    for(int i=0; i<N; i++) {
        int cnt = 1;

        for(int j=1; j<N; j++) {
            if(v[i][j] == v[i][j-1]) cnt++;
            else {
                Max = max(Max, cnt);
                cnt = 1;
            }
        }
        Max = max(Max, cnt);
        cnt = 1;

        for(int j=1; j<N; j++) {
            if(v[j][i] == v[j-1][i]) cnt++;
            else {
                Max = max(Max, cnt);
                cnt = 1;
            }
        }
        Max = max(Max, cnt);
    }

    return Max;
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    v.resize(N, vector<char>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<N-1; j++) {
            swap(v[i][j], v[i][j+1]);

            ans = max(ans, f());

            swap(v[i][j], v[i][j+1]);
        }

    for(int i=0; i<N-1; i++)
        for(int j=0; j<N; j++) {
            swap(v[i][j], v[i+1][j]);

            ans = max(ans, f());

            swap(v[i][j], v[i+1][j]);
        }

    cout << ans << "\n";
}
