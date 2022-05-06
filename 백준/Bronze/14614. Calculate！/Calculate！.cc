#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; string c; cin >> a >> b >> c;

    char d = c[c.length()-1];

    if(d == '0' || d == '2' || d == '4' || d == '6' || d == '8') cout << a << "\n";
    else cout << (a ^ b) << "\n";
}
