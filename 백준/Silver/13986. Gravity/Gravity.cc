#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    cin.ignore();

    vector<vector<char>> v(N, vector<char>(M));
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin >> v[i][j];
        cin.ignore();
    }

    for(int i=0; i<M; i++)
        for(int j=N-2; j>=0; j--)
            if(j < N-1 && v[j][i] == 'o' && v[j+1][i] == '.') {
                v[j][i] = '.';
                v[j+1][i] = 'o';
                j += 2;
            }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cout << v[i][j];
        cout << "\n";
    }
}
