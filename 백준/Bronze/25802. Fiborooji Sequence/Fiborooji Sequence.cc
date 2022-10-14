#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int cur = b, pre = a, ans = 2;

    while(true) {
        int tmp = cur;

        cur = (cur + pre) % 10;
        pre = tmp;

        ans++;

        if(pre == a && cur == b) {
            cout << ans << "\n";
            break;
        }
    }
}
