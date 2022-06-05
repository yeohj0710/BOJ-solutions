#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<double, double>> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i].first >> v[i].second;

    int Min = INT_MAX, a, b;
    for(int i=1; i<=N; i++)
        for(int j=i+1; j<=N; j++) {
            double x = pow(v[i].first - v[j].first, 2) + pow(v[i].second - v[j].second,2 );

            if(x < Min) {
                Min = x;
                a = i;
                b = j;
            }
        }

    cout << a << " " << b << "\n";
}
