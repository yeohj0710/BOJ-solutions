#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double n, b, m;
    while(cin >> n >> b >> m) {
        int ans = 0;

        while(n <= m) {
            n = n * (1 + b/100);
            ans++;
        }

        cout << ans << "\n";
    }
}
