#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int ans = 0;

    for(int i=1; i<=N; i++) {
        int mul = 1, time = to_string(i).length();

        while(time--) mul *= 10;

        ans = (int)(ans * mul + i) % M;
    }

    cout << ans << "\n";
}
