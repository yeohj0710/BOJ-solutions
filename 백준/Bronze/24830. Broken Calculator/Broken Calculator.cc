#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    int pre = 1;

    while(T--) {
        int a, b; char op; cin >> a >> op >> b;

        int ans;

        if(op == '+') ans = (a + b) - pre;
        else if(op == '-') ans = (a - b) * pre;
        else if(op == '*') ans = (a * b) * (a * b);
        else if(op == '/') {
            if(a % 2 == 0) ans = a/2;
            else ans = (a + 1)/2;
        }

        pre = ans;

        cout << ans << "\n";
    }
}

