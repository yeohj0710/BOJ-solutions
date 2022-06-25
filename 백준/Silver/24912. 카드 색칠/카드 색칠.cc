#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    bool check = true;
    for(int i=0; i<N-1; i++)
        if(v[i] != 0 && v[i] == v[i+1]) check = false;
    if(!check) {
        cout << -1 << "\n";
        return 0;
    }

    for(int i=0; i<N; i++) {
        if(v[i] != 0) continue;

        vector<bool> u(4);
        if(i > 0) u[v[i-1]] = true;
        if(i < N-1) u[v[i+1]] = true;

        if(!u[1]) v[i] = 1;
        else if(!u[2]) v[i] = 2;
        else if(!u[3]) v[i] = 3;
    }

    for(int i=0; i<N; i++) cout << v[i] << " ";
    cout << "\n";
}
