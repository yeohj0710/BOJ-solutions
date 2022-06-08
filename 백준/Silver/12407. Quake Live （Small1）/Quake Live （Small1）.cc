#include <bits/stdc++.h>
using namespace std;

int N, tot, ans;
vector<int> v;

void f(int idx, int cnt, int sum) {
    if(idx == N) {
        if(cnt == N/2) ans = min(ans, abs(sum - (tot - sum)));
        return;
    }

    f(idx + 1, cnt + 1, sum + v[idx]);
    f(idx + 1, cnt, sum);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        cin >> N;

        v.resize(N);
        tot = 0;

        for(int i=0; i<N; i++) {
            cin >> v[i];
            tot += v[i];
        }

        ans = INT_MAX;
        f(0, 0, 0);

        cout << ans << "\n";
    }
}
