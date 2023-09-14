#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0, i = 0, j = N-1;

    while(i < j) {
        int sum = v[i] + v[j];

        if(sum == M) ans++, i++, j--;
        else if(sum < M) i++;
        else j--;
    }

    cout << ans << "\n";
}
