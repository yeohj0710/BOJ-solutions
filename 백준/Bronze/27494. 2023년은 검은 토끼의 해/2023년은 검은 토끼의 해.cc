#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int ans = 0;

    for(int i=1; i<=N; i++) {
        string str = to_string(i);

        int x = 0;

        for(int j=0; j<str.length(); j++) {
            if(x == 0 && str[j] == '2') x++;
            else if(x == 1 && str[j] == '0') x++;
            else if(x == 2 && str[j] == '2') x++;
            else if(x == 3 && str[j] == '3') x++;
        }

        if(x == 4) ans++;
    }

    cout << ans << "\n";
}
