#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        v[i] = v[i-1] + x;
    }

    int i = 1, j = 1, ans = 0;

    while(j <= N) {
        int sum = v[j] - v[i-1];

        if(sum >= M) {
            if(sum == M) ans++;

            i++;
        }
        else j++;
    }

    cout << ans << "\n";
}
