#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;
    for(int i=N-1; i>=0; i--)
        for(int j=M-1; j>=0; j--)
            if(v[i][j] == '1') {
                ans++;
                for(int k=0; k<=i; k++)
                    for(int l=0; l<=j; l++) {
                        if(v[k][l] == '0') v[k][l] = '1';
                        else v[k][l] = '0';
                    }
            }

    cout << ans << "\n";
}
