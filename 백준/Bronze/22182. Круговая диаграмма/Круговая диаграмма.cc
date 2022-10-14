#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    double r; cin >> r;

    vector<double> v(N);
    double sum = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];

        sum += v[i];
    }

    cout << fixed;
    cout.precision(6);

    for(int i=0; i<N; i++)
        cout << M_PI * r * r * v[i] / sum << "\n";
}
