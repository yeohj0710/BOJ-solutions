#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> u(N), w(N);

    u[0] = v[0];
    for(int i=1; i<N; i++) u[i] = max(u[i-1], v[i]);

    w[N-1] = v[N-1];
    for(int i=N-2; i>=0; i--) w[i] = max(w[i+1], v[i]);

    int a = 0, b = 0;
    for(int i=0; i<N-1; i++) {
        if(u[i] > w[i+1]) a++;
        else if(u[i] < w[i+1]) b++;
    }

    if(a > b) cout << "R\n";
    else if(a < b) cout<< "B\n";
    else if(a == b) cout << "X\n";
}
