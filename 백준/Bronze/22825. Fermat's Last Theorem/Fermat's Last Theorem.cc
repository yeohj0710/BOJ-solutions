#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int ans = N*N*N;

        for(int i=1; i*i*i<=N*N*N; i++)
            for(int j=1; i*i*i+j*j*j<=N*N*N; j++)
                ans = min(ans, N*N*N - (i*i*i + j*j*j));

        cout << ans << "\n";
    }
}
