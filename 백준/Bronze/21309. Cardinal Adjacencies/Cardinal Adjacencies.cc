#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int a = 0, b = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            if(j < M-1 && v[i][j] == 1 && v[i][j+1] == 1) a++;
            if(i < N-1 && v[i][j] == 1 && v[i+1][j] == 1) a++;
        }

    for(int i=0; i<N-1; i++)
        for(int j=0; j<M; j++) {
            if(j < M-1 && v[i][j] == 1 && v[i+1][j+1] == 1) b++;
            if(j > 0 && v[i][j] == 1 && v[i+1][j-1] == 1) b++;
        }

    cout << a << " " << a + b << "\n";
}
