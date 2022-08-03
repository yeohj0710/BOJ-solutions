#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<pair<double, double>> v(4);

    for(int i=0; i<4; i++)
        cin >> v[i].first >> v[i].second;

    double s1 = sqrt(pow(v[0].first - v[1].first, 2) + pow(v[0].second - v[1].second, 2));
    double s2 = sqrt(pow(v[2].first - v[3].first, 2) + pow(v[2].second - v[3].second, 2));

    cout << fixed;
    cout.precision(6);

    cout << max(s1, s2) << "\n";
}
