#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<s> v(N);

    int x = 0, y = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i].x >> v[i].y;

        x += v[i].x;
        y += v[i].y;
    }

    cout << x << " " << y << "\n";

    double Min = INT_MAX;

    for(int i=0; i<N; i++) {
        x = 0, y = 0;

        for(int j=0; j<N; j++) {
            if(j == i) continue;

            x += v[j].x;
            y += v[j].y;
        }

        Min = min(Min, sqrt(x*x + y*y));
    }

    cout << fixed;
    cout.precision(2);

    cout << Min << "\n";
}
