#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    int sum = 0, cur = 0;

    for(int i=0; i<M; i++) {
        int a, b; cin >> a >> b;

        while(true) {
            if(sum >= b) break;

            if(cur >= N) {
                cout << -1 << "\n";
                return 0;
            }

            sum += v[cur++] + a;
        }

        if(i == M-1) {
            while(cur < N) {
                sum += v[cur++] + a;
            }
        }
    }

    cout << sum << "\n";
}
