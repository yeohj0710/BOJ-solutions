#include <bits/stdc++.h>
#define int long long
using namespace std;

bool f(char ch) {
    if(ch == 'H' || ch == 'Y' || ch == 'U') return true;
    else return false;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    string str; cin >> str;

    int a, b; cin >> a >> b;

    int cnt = 0, ans = 0;

    for(int i=0; i<N; i++) {
        if(f(str[i])) {
            if(cnt > 0) ans += min(cnt * a, a + b);
            cnt = 0;
        }
        else cnt++;
    }
    if(cnt > 0) ans += min(cnt * a, a + b);

    int x = 0, y = 0, z = 0;

    for(int i=0; i<N; i++) {
        if(str[i] == 'H') x++;
        else if(str[i] == 'Y') y++;
        else if(str[i] == 'U') z++;
    }

    cnt = min({x, y, z});

    if(ans == 0) cout << "Nalmeok\n";
    else cout << ans << "\n";

    if(cnt == 0) cout << "I love HanYang University\n";
    else cout << cnt << "\n";
}
