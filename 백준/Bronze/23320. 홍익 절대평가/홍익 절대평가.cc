#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<double> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    double p, s; cin >> p >> s;

    int a = (int)((p*N)/100), b = 0;

    for(int i=0; i<N; i++)
        if(v[i] >= s) b++;

    cout << a << " " << b << "\n";
}
