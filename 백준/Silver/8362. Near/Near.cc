#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N), u(M);

    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<M; i++) cin >> u[i];

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    int i = 0, j = 0, ans = INT_MAX;

    while(i < N && j < M) {
        ans = min(ans, abs(v[i] - u[j]));

        if(i < N-1 && j < M-1) {
            if(abs(v[i+1] - u[j]) < abs(v[i] - u[j+1])) i++;
            else j++;
        }
        else if(i == N-1) j++;
        else if(j == M-1) i++;
    }

    cout << ans << "\n";
}
