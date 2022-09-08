#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> v(N+1, vector<int>(N+1));

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) cin >> v[i][j];

    for(int i=1; i<=N; i++)
        for(int j=i+1; j<=N; j++) {
            bool check = true;

            for(int k=1; k<=N; k++) {
                if(k == i || k == j) continue;

                if(v[i][k] + v[k][j] <= v[i][j]) check = false;
            }

            if(check) cout << i << " " << j << "\n";
        }
}
