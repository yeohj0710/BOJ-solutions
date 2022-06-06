#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int i = 0, j = 0, ans = 0;
    while(j < N) {
        if(v[i]/M == v[j]/M) j++;
        else {
            ans += ((j - 1) - i + 1) * ((j - 1) - i) / 2;
            i = j;
        }
    }
    ans += ((j - 1) - i + 1) * ((j - 1) - i) / 2;

    cout << ans << "\n";
}
