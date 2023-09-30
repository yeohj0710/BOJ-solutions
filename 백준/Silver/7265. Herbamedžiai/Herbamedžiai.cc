#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> u(N);
    for(int i=0; i<N; i++) {
        if(i == 0) u[i] = v[i];
        else if(i == 1) u[i] = max(v[i-1], v[i]);
        else u[i] = max(u[i-2] + v[i], u[i-1]);
    }

    cout << u[N-1] << "\n";
}
