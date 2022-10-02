#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { double x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<s> v(N);

    for(int i=0; i<N; i++) cin >> v[i].x;
    for(int i=0; i<N; i++) cin >> v[i].y;

    vector<double> u(N), w(N);

    for(int i=1; i<N; i++) {
        if(v[i].y < v[i-1].y)
            u[i] = u[i-1] + sqrt(pow(v[i].x - v[i-1].x, 2) + pow(v[i].y - v[i-1].y, 2));
        else if(v[i].y == v[i-1].y)
            u[i] = u[i-1] + sqrt(pow(v[i].x - v[i-1].x, 2) + pow(v[i].y - v[i-1].y, 2)) * 2;
        else if(v[i].y > v[i-1].y)
            u[i] = u[i-1] + sqrt(pow(v[i].x - v[i-1].x, 2) + pow(v[i].y - v[i-1].y, 2)) * 3;
    }

    for(int i=N-2; i>=0; i--) {
        if(v[i].y < v[i+1].y)
            w[i] = w[i+1] + sqrt(pow(v[i].x - v[i+1].x, 2) + pow(v[i].y - v[i+1].y, 2));
        else if(v[i].y == v[i+1].y)
            w[i] = w[i+1] + sqrt(pow(v[i].x - v[i+1].x, 2) + pow(v[i].y - v[i+1].y, 2)) * 2;
        else if(v[i].y > v[i+1].y)
            w[i] = w[i+1] + sqrt(pow(v[i].x - v[i+1].x, 2) + pow(v[i].y - v[i+1].y, 2)) * 3;
    }

    cout << fixed;
    cout.precision(4);

    while(M--) {
        int a, b; cin >> a >> b;

        if(a < b) cout << u[b-1] - u[a-1] << "\n";
        else cout << w[b-1] - w[a-1] << "\n";
    }
}
