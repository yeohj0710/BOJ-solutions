#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int ans = -1;
        for(int i=0; i<N; i++)
            for(int j=i+1; j<N; j++)
                if(v[i] + v[j] <= M && v[i] + v[j] > ans) ans = v[i] + v[j];

        if(ans != -1) cout << ans << "\n";
        else cout << "NONE\n";
    }
}
