#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int ans = 0;
        for(int i=0; i<N; i++)
            for(int j=0; j<i; j++)
                if(v[j] > v[i]) ans++;

        cout << "Optimal train swapping takes " << ans << " swaps.\n";
    }
}
