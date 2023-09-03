#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, b; cin >> n >> b;

    struct s { int x, y; };
    vector<s> v(n);
    int sum_x = 0, sum_y = 0;

    for(int i=0; i<n; i++) {
        cin >> v[i].x >> v[i].y;

        sum_x += v[i].x;
        sum_y += v[i].y;
    }

    if(sum_x == 0) {
        cout << "EZPZ\n";
        return 0;
    }

    int num = sum_y - n * b;
    int den = sum_x;
    int gcd = __gcd(num, den);

    num /= gcd;
    den /= gcd;

    if(den < 0) num = -num, den = -den;

    if(num == 0) cout << 0 << "\n";
    else if(den == 1) cout << num << "\n";
    else cout << num << "/" << den << "\n";
}
