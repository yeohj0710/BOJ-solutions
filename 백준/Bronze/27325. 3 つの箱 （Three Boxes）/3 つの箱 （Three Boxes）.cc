#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    string str; cin >> str;

    int x = 1, ans = 0;

    for(int i=0; i<N; i++) {
        if(str[i] == 'L') x = max(x-1, (int)1);
        else x = min(x+1, (int)3);

        if(x == 3) ans++;
    }

    cout << ans << "\n";
}
