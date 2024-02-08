#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    int i = 1, j = 1, ans = 0, cnt = 1;
    vector<int> u(10);
    u[v[1]]++;

    while(true) {
        if(cnt <= 2) {
            ans = max(ans, j - i + 1);
            j++;

            if(j <= N) {
                if(u[v[j]] == 0) cnt++;

                u[v[j]]++;
            }
            else break;
        }
        else {
            u[v[i]]--;

            if(u[v[i]] == 0) cnt--;

            i++;
        }
    }

    cout << ans << "\n";
}
