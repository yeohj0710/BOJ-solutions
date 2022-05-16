#include <bits/stdc++.h>
#define int long long
using namespace std;

int lcm(int a, int b) {
    int x = a, y = b;

    while(y != 0) {
        int temp = x % y;
        x = y;
        y = temp;
    }

    return a/x * b/x * x;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    int d = lcm(a, b);

    if(d <= c) cout << "yes\n";
    else cout << "no\n";
}
