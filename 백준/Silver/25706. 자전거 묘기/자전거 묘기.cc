#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> u(N);
    u[N-1] = 1;

    for(int i=N-2; i>=0; i--) {
        if(v[i] == 0) u[i] = u[i+1] + 1;
        else if(i + v[i] + 1 >= N) u[i] = 1;
        else u[i] = u[i + v[i] + 1] + 1;
    }

    for(int i=0; i<N; i++) cout << u[i] << " ";
    cout << "\n";
}
