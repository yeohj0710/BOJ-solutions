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

        int M; cin >> M;

        vector<int> u(M);
        for(int i=0; i<M; i++) cin >> u[i];

        int K; cin >> K;

        vector<int> w(K);
        for(int i=0; i<K; i++) cin >> w[i];

        map<int, bool> m;
        int ans = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                for(int k=0; k<K; k++) {
                    int sum = v[i] + u[j] + w[k];

                    bool check = true;

                    if(m[sum]) check = false;

                    m[sum] = true;

                    while(sum > 0) {
                        if(sum % 10 != 5 && sum % 10 != 8) check = false;
                        sum /= 10;
                    }

                    if(check) ans++;
                }

        cout << ans << "\n";
    }
}
