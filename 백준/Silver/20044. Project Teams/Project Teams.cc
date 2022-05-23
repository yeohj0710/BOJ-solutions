#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N*2);
    for(int i=0; i<N*2; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vector<int> u(N);
    for(int i=0; i<N; i++) u[i] = v[i] + v[N*2-1-i];

    sort(u.begin(), u.end());

    cout << u[0] << "\n";
}
