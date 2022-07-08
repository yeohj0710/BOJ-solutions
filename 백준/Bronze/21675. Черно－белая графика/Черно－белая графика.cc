#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> M >> N;

    vector<vector<char>> v(N, vector<char>(M));
    vector<vector<char>> u(N, vector<char>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> u[i][j];

    string str; cin >> str;

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(v[i][j] == '0' && u[i][j] == '0') cout << str[0];
            else if(v[i][j] == '0' && u[i][j] == '1') cout << str[1];
            else if(v[i][j] == '1' && u[i][j] == '0') cout << str[2];
            else if(v[i][j] == '1' && u[i][j] == '1') cout << str[3];
        }
        cout << "\n";
    }
}
