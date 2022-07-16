#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N, vector<char>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    vector<string> u;
    string str = "";

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            if(v[i][j] >= 'a' && v[i][j] <= 'z') str += v[i][j];

            if(v[i][j] == '#' || j == M-1) {
                if(str.length() >= 2) u.push_back(str);
                str = "";
            }
        }

    for(int j=0; j<M; j++)
        for(int i=0; i<N; i++) {
            if(v[i][j] >= 'a' && v[i][j] <= 'z') str += v[i][j];

            if(v[i][j] == '#' || i == N-1) {
                if(str.length() >= 2) u.push_back(str);
                str = "";
            }
        }

    sort(u.begin(), u.end());

    cout << u[0] << "\n";
}
