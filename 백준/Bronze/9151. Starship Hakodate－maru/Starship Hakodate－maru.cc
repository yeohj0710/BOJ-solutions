#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int ans = 0;

        for(int i=0; i*i*i<=N; i++)
            for(int j=0; i*i*i+j*(j+1)*(j+2)/6<=N; j++) ans = max(ans, i*i*i + j*(j+1)*(j+2)/6);

        cout << ans << "\n";
    }
}
