#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    int sum = a + b, ans = 0;

    while(sum >= c) {
        ans += sum/c;
        sum = sum/c + sum%c;
    }

    cout << ans;
}
