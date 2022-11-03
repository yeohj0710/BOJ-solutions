#include <bits/stdc++.h>
#define int long long
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int ans = 0, x = 0, y = 0;

    for(int i=0; i<N-K+1; i++)
        for(int j=0; j<M-K+1; j++) {
            int cnt = 0;

            for(int k=i+1; k<i+K-1; k++)
                for(int l=j+1; l<j+K-1; l++)
                    if(v[k][l] == '*') cnt++;

            if(cnt > ans) {
                ans = cnt;

                x = i;
                y = j;
            }
        }

    cout << ans << "\n";

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(i == x && j == y) cout << "+";
            else if(i == x+K-1 && j == y) cout << "+";
            else if(i == x && j == y+K-1) cout << "+";
            else if(i == x+K-1 && j == y+K-1) cout << "+";
            else if((i == x || i == x+K-1) && j > y && j < y+K-1) cout << "-";
            else if((j == y || j == y+K-1) && i > x && i < x+K-1) cout << "|";
            else cout << v[i][j];
        }
        cout << "\n";
    }
}
