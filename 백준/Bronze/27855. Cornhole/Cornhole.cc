#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d; cin >> a >> b >> c >> d;

    int sum1 = a*3 + b, sum2 = c*3 + d;

    if(sum1 > sum2) cout << "1 " << sum1 - sum2 << "\n";
    else if(sum1 < sum2) cout << "2 " << sum2 - sum1 << "\n";
    else cout << "NO SCORE\n";
}
