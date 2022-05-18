#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int A, C, r, g, b; cin >> A >> C >> r >> g >> b;

        r++;
        int x = A * (r*r + g*g + b*b) + C * min(min(r, g), b);
        r--;

        g++;
        int y = A * (r*r + g*g + b*b) + C * min(min(r, g), b);
        g--;

        b++;
        int z = A * (r*r + g*g + b*b) + C * min(min(r, g), b);
        b--;

        if(x >= y && x >= z) cout << "RED\n";
        else if(y >= x && y >= z) cout << "GREEN\n";
        else cout << "BLUE\n";
    }
}
