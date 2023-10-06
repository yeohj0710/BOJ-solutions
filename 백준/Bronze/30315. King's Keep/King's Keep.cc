#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<pair<int, int>> v(N);

    for(int i=0; i<N; i++)
        cin >> v[i].first >> v[i].second;

    double ans = DBL_MAX;

    for(int i=0; i<N; i++) {
        double avg = 0;

        for(int j=0; j<N; j++)
            avg += sqrt(pow(v[i].first - v[j].first, 2) + pow(v[i].second - v[j].second, 2));

        avg /= N - 1;

        ans = min(ans, avg);
    }

    cout << fixed << setprecision(6);

    cout << ans << "\n";
}
