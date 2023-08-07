#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    cout << fixed << setprecision(5);

    for(int t=1; ; t++) {
        int N; cin >> N;

        if(N == -1) break;

        vector<pair<int, double>> v(N);

        for(int i=0; i<N; i++)
            cin >> v[i].first >> v[i].second;

        int M; double tot; cin >> M >> tot;

        double l = 0, r = 1, times = 1e2;

        while(times--) {
            double m = (l + r) / 2, sum = 0;

            for(int i=0; i<N; i++)
                sum += v[i].second * pow(1 + m, M + 1 - v[i].first);

            if(sum > tot) r = m;
            else l = m;
        }

        cout << "Case " << t << ": " << l << "\n";
        cout << "\n";
    }
}
