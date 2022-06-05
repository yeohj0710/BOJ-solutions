#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        int N, M; cin >> N >> M;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int ans = 0;
        for(int i=0; i<N; i++) {
            if(v[i] == M) {
                if(i + M - 1 >= N) continue;

                bool check = true;
                for(int j=i; j<i+M; j++)
                    if(v[j] != M+i-j) check = false;

                if(check) ans++;
            }
        }

        cout << ans << "\n";
    }
}
