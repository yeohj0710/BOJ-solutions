#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N+1, vector<int>(M+1));

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) cin >> v[i][j];

    int ans = 0, a, b;

    for(int i=1; i<=N-2; i++)
        for(int j=1; j<=M-2; j++) {
            int sum = 0;

            for(int k=0; k<3; k++)
                for(int l=0; l<3; l++) sum += v[i+k][j+l];

            if(sum > ans) {
                ans = sum;
                a = i;
                b = j;
            }
        }

    cout << ans << "\n";
    cout << a << " " << b << "\n";
}
