#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int r = 0, g = 0, y = 0;

    vector<int> v(6);
    for(int i=0; i<6; i++) cin >> v[i];

    for(int i=1; i<=v[5]; i++) {
        int c = v[0] + v[1] + v[2] + v[3] + v[4];
        int t = (i - 1) % c + 1;

        if(t <= v[0]) g++;
        else if(t <= v[0] + v[1]) {
            if(t % 2 == 0) g++;
        }
        else if(t <= v[0] + v[1] + v[2]) y++;
        else if(t <= v[0] + v[1] + v[2] + v[3]) r++;
        else r++, y++;
    }

    cout << r << " " << y << " " << g << "\n";
}
