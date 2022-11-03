#include <bits/stdc++.h>
#define int long long
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int ans = INT_MAX;

    for(int i=1; i<N; i++)
        for(int j=i+1; j<N; j++) {
            int cnt = 0;

            for(int k=0; k<i; k++)
                for(int l=0; l<M; l++)
                    if(v[k][l] != 'W') cnt++;

            for(int k=i; k<j; k++)
                for(int l=0; l<M; l++)
                    if(v[k][l] != 'B') cnt++;

            for(int k=j; k<N; k++)
                for(int l=0; l<M; l++)
                    if(v[k][l] != 'R') cnt++;

            ans = min(ans, cnt);
        }

    cout << ans << "\n";
}
