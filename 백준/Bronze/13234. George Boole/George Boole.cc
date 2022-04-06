#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b, op; cin >> a >> op >> b;

    bool x, y;
    if(a == "true") x = true;
    else x = false;
    if(b == "true") y = true;
    else y = false;

    if(op == "AND") {
        if(x && y) cout << "true";
        else cout << "false";
    }
    else {
        if(x || y) cout << "true";
        else cout << "false";
    }
}
