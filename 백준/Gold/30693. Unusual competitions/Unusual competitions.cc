#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string str; cin >> N >> str;

    int x = 0, y = 0, ans = 0;

    for(int i=0; i<N; i++) {
        if(str[i] == '(') x++;
        else x--;

        if(x < 0) ans++;
        else if(x == 0 && y < 0) ans++;

        y = x;
    }

    if(x != 0) {
        cout << -1 << "\n";
        return 0;
    }

    cout << ans << "\n";
}
