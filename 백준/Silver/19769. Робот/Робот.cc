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

    vector<int> u(v);

    sort(u.begin(), u.end(), greater<int>());

    int ans = 0, sum = 0;

    for(int i=0; i<N; i++) {
        if(i < M && v[i] < 0) v[i] = -v[i];

        sum += v[i];
    }

    ans = max(ans, abs(sum));

    sum = 0;

    for(int i=0; i<N; i++) {
        if(i < M && u[i] > 0) u[i] = -u[i];

        sum += u[i];
    }

    ans = max(ans, abs(sum));

    cout << ans << "\n";
}
