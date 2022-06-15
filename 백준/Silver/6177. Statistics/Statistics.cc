#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<double> v(N);
    double avg = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];
        avg += v[i];
    }

    avg /= N;

    sort(v.begin(), v.end());

    double mid;
    if(N % 2 == 0) mid = (v[N/2 - 1] + v[N/2])/2;
    else mid = v[N/2];

    cout << fixed;
    cout.precision(3);

    cout << avg << "\n" << mid << "\n";
}
