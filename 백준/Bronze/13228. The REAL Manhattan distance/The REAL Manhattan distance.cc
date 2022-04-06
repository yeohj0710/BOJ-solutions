#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t; cin >> t;

    while(t--) {
        int x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

        cout << abs(x1 - x2) + abs(y1 - y2) + z1 + z2 << "\n";
    }
}
