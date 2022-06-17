#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<double> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vector<double> u(N-1);
    for(int i=0; i<N-1; i++) u[i] = (v[i] + v[i+1])/2;

    vector<double> w(N-2);
    for(int i=0; i<N-2; i++) w[i] = u[i+1] - u[i];

    sort(w.begin(), w.end());

    cout << fixed;
    cout.precision(1);

    cout << w[0] << "\n";
}
