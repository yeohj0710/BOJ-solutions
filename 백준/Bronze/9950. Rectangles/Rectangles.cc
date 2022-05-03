#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b, c; cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;

        if(a == 0) a = c/b;
        else if(b == 0) b = c/a;
        else if(c == 0) c = a*b;

        cout << a << " " << b << " " << c << "\n";
    }
}
