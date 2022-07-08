#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<double> v(N);
    double Max = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];
        Max = max(Max, v[i]);
    }

    for(int i=0; i<N; i++) v[i] = (v[i] / Max) * 100;

    double avg = 0;
    for(int i=0; i<N; i++) avg += v[i];

    avg /= N;

    cout << fixed;
    cout.precision(2);

    cout << avg << "\n";
}
