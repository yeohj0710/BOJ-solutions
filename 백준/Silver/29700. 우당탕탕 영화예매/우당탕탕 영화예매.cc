#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    int ans = 0;

    while(N--) {
        vector<int> v(M+1);

        for(int i=1; i<=M; i++) {
            char ch; cin >> ch;

            if(ch == '1') v[i] = 1;

            v[i] += v[i-1];
        }

        for(int i=K; i<=M; i++)
            if(v[i] - v[i-K] == 0) ans++;
    }

    cout << ans << "\n";
}
