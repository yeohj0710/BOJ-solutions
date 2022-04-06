#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    if(a == b && b != c) cout << "C";
    else if(a == c && a != b) cout << "B";
    else if(b == c && a != b) cout << "A";
    else cout << "*";
}
