#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        double a, b, c, d; cin >> a >> b >> c >> d;
        if(!a && !b && !c && !d) break;

        if(a < b) swap(a, b);
        if(c < d) swap(c, d);

        cout << int(min(min(c/a * 100, d/b * 100), 100.0)) << "%\n";
    }
}
