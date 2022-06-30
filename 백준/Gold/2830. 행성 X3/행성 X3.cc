#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt[20] = {};

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        for(int j=0; j<20; j++)
            if(x & (1 << j)) cnt[j]++;
    }

    int ans = 0;

    for(int i=0; i<20; i++)
        ans += ((cnt[i] * (N - cnt[i])) << i);

    cout << ans << "\n";
}
