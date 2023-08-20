#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c; cin >> a >> b >> c;

    int ans = 0;

    for(int i=a; i<=a+c; i++)
        for(int j=b; j<=b+c; j++) {
            int k = a + b + c - i - j;

            if(k < 0 || k > c || i <= j) continue;

            ans++;
        }

    cout << ans << "\n";
}
