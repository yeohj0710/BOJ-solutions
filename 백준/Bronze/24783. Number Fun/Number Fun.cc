#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        double a, b, c; cin >> a >> b >> c;

        if(a + b == c || a - b == c || a * b == c || a / b == c || b - a == c || b / a == c) cout << "Possible\n";
        else cout << "Impossible\n";
    }
}
