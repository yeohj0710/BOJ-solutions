#include <bits/stdc++.h>
#define int long long
using namespace std;

int a, b, ans = INT_MAX;

void f(int cnt, int a) {
    if(a > b) return;

    if(a == b) {
        ans = min(ans, cnt);
        return;
    }

    f(cnt + 1, a * 2);
    f(cnt + 1, a * 10 + 1);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> a >> b;

    f(0, a);

    if(ans != INT_MAX) cout << ans + 1 << "\n";
    else cout << -1 << "\n";
}
