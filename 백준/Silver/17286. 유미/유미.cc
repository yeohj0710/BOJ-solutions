#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<pair<double, double>> v(4);

    for(int i=0; i<4; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin()+1, v.end());

    double Min = INT_MAX;

    while(true) {
        double sum = 0;

        for(int i=1; i<4; i++)
            sum += sqrt(pow(v[i].first - v[i-1].first, 2) + pow(v[i].second - v[i-1].second, 2));

        Min = min(Min, sum);

        if(!next_permutation(v.begin()+1, v.end())) break;
    }

    cout << (int)Min << "\n";
}
