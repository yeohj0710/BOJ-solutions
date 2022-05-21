#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d; cin >> a >> b >> c >> d;

    if(a > b) swap(a, b);
    if(c > d) swap(c, d);

    if(a > c) {
        swap(a, c);
        swap(b, d);
    }

    if(a <= c && d <= b) cout << b - a + 1 << "\n";
    else if(c <= b) cout << d - a + 1 << "\n";
    else cout << b - a + 1 + d - c + 1 << "\n";
}
