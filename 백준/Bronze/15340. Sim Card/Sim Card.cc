#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b; cin >> a >> b;
        if(a == 0 && b == 0) break;

        int ans = 30*a + 40*b;
        ans = min(ans, 35*a + 30*b);
        ans = min(ans, 40*a + 20*b);

        cout << ans << "\n";
    }
}
