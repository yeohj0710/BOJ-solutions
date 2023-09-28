#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(3);

    for(int i=0; i<3; i++) cin >> v[i];

    int x = 0, y = 0, mn = INT_MAX;

    for(int i=0; i<3; i++) {
        int cur = 0;

        while(true) {
            cur += v[i];

            int val = abs(cur - N);

            if(val < mn) {
                mn = val;
                x = v[i];
                y = cur;
            }

            if(cur > N) break;
        }
    }

    cout << x << " " << y << "\n";
}
