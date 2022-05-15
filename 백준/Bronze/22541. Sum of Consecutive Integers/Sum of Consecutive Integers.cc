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
        for(int i=0; i<N; i++)
            for(int j=0; j<i; j++)
                if(i*(i+1)/2 - j*(j+1)/2 == N) ans++;

        cout << ans << "\n";
    }
}
