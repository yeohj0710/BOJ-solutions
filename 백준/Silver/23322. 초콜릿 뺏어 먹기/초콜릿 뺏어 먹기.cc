#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int cnt = 0, sum = 0;

    for(int i=1; i<N; i++) {
        if(v[i] > v[0]) cnt++;

        sum += v[i] - v[0];
    }

    cout << sum << " " << cnt << "\n";
}
