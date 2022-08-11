#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, ans = 0;

vector<vector<int>> u(vector<vector<int>> v) {
    vector<vector<bool>> b(N, vector<bool>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            for(int k=j-1; k>=0; k--) {
                if(v[k][i] == 0) {
                    v[k][i] = v[k+1][i];
                    v[k+1][i] = 0;
                }
                else if(v[k][i] == v[k+1][i] && !b[k][i]) {
                    v[k][i] *= 2;
                    v[k+1][i] = 0;
                    b[k][i] = true;

                    break;
                }
                else break;
            }

    return v;
}

vector<vector<int>> d(vector<vector<int>> v) {
    vector<vector<bool>> b(N, vector<bool>(N));

    for(int i=0; i<N; i++)
        for(int j=N-1; j>=0; j--)
            for(int k=j; k<N-1; k++) {
                if(v[k+1][i] == 0) {
                    v[k+1][i] = v[k][i];
                    v[k][i] = 0;
                }
                else if(v[k+1][i] == v[k][i] && !b[k+1][i]) {
                    v[k+1][i] *= 2;
                    v[k][i] = 0;
                    b[k+1][i] = true;

                    break;
                }
                else break;
            }

    return v;
}

vector<vector<int>> l(vector<vector<int>> v) {
    vector<vector<bool>> b(N, vector<bool>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            for(int k=j-1; k>=0; k--) {
                if(v[i][k] == 0) {
                    v[i][k] = v[i][k+1];
                    v[i][k+1] = 0;
                }
                else if(v[i][k] == v[i][k+1] && !b[i][k]) {
                    v[i][k] *= 2;
                    v[i][k+1] = 0;
                    b[i][k] = true;

                    break;
                }
                else break;
            }

    return v;
}

vector<vector<int>> r(vector<vector<int>> v) {
    vector<vector<bool>> b(N, vector<bool>(N));

    for(int i=0; i<N; i++)
        for(int j=N-1; j>=0; j--)
            for(int k=j; k<N-1; k++) {
                if(v[i][k+1] == 0) {
                    v[i][k+1] = v[i][k];
                    v[i][k] = 0;
                }
                else if(v[i][k+1] == v[i][k] && !b[i][k+1]) {
                    v[i][k+1] *= 2;
                    v[i][k] = 0;
                    b[i][k+1] = true;

                    break;
                }
                else break;
            }

    return v;
}

void f(vector<vector<int>> v, int cnt) {
    if(cnt == 5) {
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) ans = max(ans, v[i][j]);

        return;
    }

    f(u(v), cnt+1);
    f(d(v), cnt+1);
    f(l(v), cnt+1);
    f(r(v), cnt+1);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    vector<vector<int>> v(N, vector<int>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    f(v, 0);

    cout << ans << "\n";
}
