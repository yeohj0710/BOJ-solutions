#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        struct s { double a, b; };
        vector<s> v;

        while(true) {
            double a, b; cin >> a >> b;

            if(a == -1 && b == -1) return 0;
            if(a == 0 && b == 0) break;

            v.push_back({a, b});
        }

        double a = 0, b = 0;

        for(int i=1; i<v.size(); i++) {
            if(v[i].b >= v[i-1].b) continue;

            a += v[i].a - v[i-1].a;
            b += v[i-1].b - v[i].b;
        }

        cout << round(v.back().b * a / b) << "\n";
    }
}
