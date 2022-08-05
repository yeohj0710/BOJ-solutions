#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N+1);
        for(int i=1; i<=N; i++) cin >> v[i];

        int ans = 0;

        for(int i=1; i<=N; i++)
            for(int j=i+1; j<=N; j++)
                if(v[i] > v[j]) {
                    swap(v[i], v[j]);
                    ans++;
                }

        cout << ans << "\n";
    }
}
