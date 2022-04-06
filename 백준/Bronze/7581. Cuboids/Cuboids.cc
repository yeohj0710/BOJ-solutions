#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d;
    while(true) {
        cin >> a >> b >> c >> d;
        if(!a && !b && !c && !d) break;
        if(!a) cout << d/b/c << " "  << b << " " << c << " " << d;
        else if(!b) cout << a << " " << d/a/c << " " << c << " " << d;
        else if(!c) cout << a << " " << b << " " << d/a/b << " " << d;
        else cout << a << " " << b << " " << c << " " << a*b*c;
        cout << "\n";
    }
}
