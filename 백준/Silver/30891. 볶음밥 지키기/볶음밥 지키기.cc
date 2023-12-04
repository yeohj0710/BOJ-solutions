#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, R; cin >> N >> R;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    int mx = 0, x = 0, y = 0;

    for(int i=-100; i<=100; i++)
        for(int j=-100; j<=100; j++) {
            int cnt = 0;

            for(int k=0; k<N; k++)
                if(sqrt(pow(i - v[k].first, 2) + pow(j - v[k].second, 2)) <= R) cnt++;

            if(cnt > mx) {
                mx = cnt;
                x = i;
                y = j;
            }
        }

    cout << x << " " << y << "\n";
}
