#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b, c; cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;

        if((c - a) % b != 0) cout << "X\n";
        else if((c - a)/b < 0) cout << "X\n";
        else cout << (c - a)/b + 1 << "\n";
    }
}
