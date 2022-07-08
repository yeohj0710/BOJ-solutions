#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { string str; double x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(1);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Recipe # " << t << "\n";

        int N; cin >> N;

        double a, b; cin >> a >> b;

        vector<s> v(N);
        double st;

        for(int i=0; i<N; i++) {
            cin >> v[i].str >> v[i].x >> v[i].y;

            if(v[i].y == 100) st = v[i].x * (b / a);
        }

        for(int i=0; i<N; i++) {
            cout << v[i].str << " " << st * (v[i].y / 100) << "\n";
        }

        cout << "----------------------------------------\n";
    }
}
