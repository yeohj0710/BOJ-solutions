#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

    if((a * b) % 2 == 0) cout << "equal\n";
    else if(c % 2 == d % 2) {
        if(e == 0) cout << "black\n";
        else cout << "white\n";
    }
    else {
        if(e == 0) cout << "white\n";
        else cout << "black\n";
    }
}
