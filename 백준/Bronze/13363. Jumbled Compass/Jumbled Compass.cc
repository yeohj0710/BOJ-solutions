#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    if(a < b) {
        int x = b - a;
        int y = a + 360 - b;

        if(x < y) cout << x << "\n";
        else if(x > y) cout << -y << "\n";
        else cout << 180 << "\n";
    }
    else if(a > b) {
        int x = a - b;
        int y = b + 360 - a;

        if(x < y) cout << -x << "\n";
        else if(x > y) cout << y << "\n";
        else cout << 180 << "\n";
    }
    else cout << 0 << "\n";
}
