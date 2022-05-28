#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> v(N, vector<int>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    for(int i=0; i<N; i++) {
        int ans = 0, Max = 0;
        for(int j=0; j<N; j++) {
            if(v[j][i] > Max) {
                ans++;
                Max = v[j][i];
            }
        }
        cout << ans << " " ;
    }
    cout << "\n";

    for(int i=0; i<N; i++) {
        int ans = 0, Max = 0;
        for(int j=0; j<N; j++) {
            if(v[i][j] > Max) {
                ans++;
                Max = v[i][j];
            }
        }
        cout << ans << "\n";
    }
}
