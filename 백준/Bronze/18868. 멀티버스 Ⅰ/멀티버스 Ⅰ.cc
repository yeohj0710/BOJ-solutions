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

    int ans = 0;
    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++) {
            bool check = true;
            for(int k=0; k<M; k++)
                for(int l=k+1; l<M; l++) {
                    if(v[i][k] < v[i][l] && v[j][k] >= v[j][l]) check = false;
                    else if(v[i][k] == v[i][l] && v[j][k] != v[j][l]) check = false;
                    else if(v[i][k] > v[i][l] && v[j][k] <= v[j][l]) check = false;
                }
            if(check) ans++;
        }

    cout << ans << "\n";
}
