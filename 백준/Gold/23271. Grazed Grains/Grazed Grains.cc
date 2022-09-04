#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int x, y, r; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    mt19937 mt((unsigned int)time(NULL));
    uniform_int_distribution<int> uid(0, INT_MAX);
    auto rd = bind(uid, mt);

    int N; cin >> N;

    vector<s> v(N);
    for(int i=0; i<N; i++)
        cin >> v[i].x >> v[i].y >> v[i].r;

    int cnt = 0;

    for(int att=1; att<=1e6; att++) {
        bool check = false;

        double x = ((rd() % (int)1e5) / 1e5) * 40 - 20;
        double y = ((rd() % (int)1e5) / 1e5) * 40 - 20;

        for(int i=0; i<N; i++)
            if(pow(x - v[i].x, 2) + pow(y - v[i].y, 2) <= pow(v[i].r, 2)) check = true;

        if(check) cnt++;
    }

    double ans = pow(40, 2) * (cnt / 1e6);

    cout << ans << "\n";
}
