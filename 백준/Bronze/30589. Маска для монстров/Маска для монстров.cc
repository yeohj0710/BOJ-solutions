#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<pair<double, double>> v(N);
    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    double mx = 0, sum = 0;

    for(int i=0; i<N; i++) {
        double dis = sqrt(pow(v[i].first - v[(i+1) % N].first, 2) + pow(v[i].second - v[(i+1) % N].second, 2));

        sum += dis;
        mx = max(mx, dis);
    }

    cout << fixed << setprecision(6);
    cout << sum - mx << "\n";
}
