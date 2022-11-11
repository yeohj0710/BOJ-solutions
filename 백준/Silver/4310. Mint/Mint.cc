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

        for(int i=0; i<M; i++) {
            int x; cin >> x;

            int ans1 = 0, ans2 = INT_MAX;

            for(int a=0; a<N; a++)
                for(int b=a+1; b<N; b++)
                    for(int c=b+1; c<N; c++)
                        for(int d=c+1; d<N; d++) {
                            int lcm = 1;

                            lcm = lcm * v[a] / __gcd(lcm, v[a]);
                            lcm = lcm * v[b] / __gcd(lcm, v[b]);
                            lcm = lcm * v[c] / __gcd(lcm, v[c]);
                            lcm = lcm * v[d] / __gcd(lcm, v[d]);

                            ans1 = max(ans1, x / lcm * lcm);
                            ans2 = min(ans2, ((x - 1) / lcm + 1) * lcm);
                        }

            cout << ans1 << " " << ans2 << "\n";
        }
    }
}
