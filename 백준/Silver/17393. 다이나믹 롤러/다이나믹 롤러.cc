#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N), u(N);
    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<N; i++) cin >> u[i];

    for(int i=0; i<N; i++) {
        cout << upper_bound(u.begin()+i+1, u.end(), v[i]) - (u.begin()+i+1) << " ";
    }
    cout << "\n";
}
