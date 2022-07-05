#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N+1, vector<int>(M+1));

    int K; cin >> K;
    while(K--) {
        int a, b; cin >> a >> b;
        v[a][b] = 1;
    }

    int ans = 0;
    for(int i=1; i<=N; i++)
        for(int j=i; j<=N; j++)
            for(int k=1; k<=M; k++)
                for(int l=k; l<=M; l++) {
                    bool check = true;
                    for(int m=i; m<=j; m++)
                        for(int n=k; n<=l; n++)
                            if(v[m][n] != 0) check = false;

                    if(check) ans = max(ans, (j-i+1)*(l-k+1));
                }

    cout << ans << "\n";
}
