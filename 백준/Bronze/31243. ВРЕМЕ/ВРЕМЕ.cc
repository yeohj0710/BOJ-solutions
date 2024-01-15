#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(2);

    v[0] = INT_MAX;
    v[1] = INT_MIN;

    for(int i=0; i<3; i++) {
        int a, b, c, d; cin >> a >> b >> c >> d;

        int sum = (c * 60 + d) - (a * 60 + b);

        if(sum < 0) sum += 24 * 60;

        v[0] = min(v[0], sum);
        v[1] = max(v[1], sum);
    }

    for(int i=0; i<2; i++) {
        int x = v[i] / 60;
        int y = v[i] % 60;

        string yy = to_string(y);

        while(yy.length() < 2) yy = '0' + yy;

        cout << x << ":" << yy << "\n";
    }
}
