#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(2);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<vector<int>> v(N, vector<int>(N));
        vector<vector<int>> u(v);

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) cin >> v[i][j];

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) cin >> u[i][j];

        double ans = 0;

        int cnt = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(abs(v[i][j] - u[i][j]) <= 100) cnt++;

        ans = max(ans, (double)cnt / (N * N) * 100);

        cnt = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(abs(v[j][N-1-i] - u[i][j]) <= 100) cnt++;

        ans = max(ans, (double)cnt / (N * N) * 100);

        cnt = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(abs(v[N-1-i][N-1-j] - u[i][j]) <= 100) cnt++;

        ans = max(ans, (double)cnt / (N * N) * 100);

        cnt = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(abs(v[N-1-j][i] - u[i][j]) <= 100) cnt++;

        ans = max(ans, (double)cnt / (N * N) * 100);

        for(int i=0; i<N; i++) {
            for(int j=0; j<N/2; j++) swap(v[i][j], v[i][N-1-j]);
        }

        cnt = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(abs(v[i][j] - u[i][j]) <= 100) cnt++;

        ans = max(ans, (double)cnt / (N * N) * 100);

        cnt = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(abs(v[j][N-1-i] - u[i][j]) <= 100) cnt++;

        ans = max(ans, (double)cnt / (N * N) * 100);

        cnt = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(abs(v[N-1-i][N-1-j] - u[i][j]) <= 100) cnt++;

        ans = max(ans, (double)cnt / (N * N) * 100);

        cnt = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(abs(v[N-1-j][i] - u[i][j]) <= 100) cnt++;

        ans = max(ans, (double)cnt / (N * N) * 100);

        cout << ans << "\n";
    }
}
