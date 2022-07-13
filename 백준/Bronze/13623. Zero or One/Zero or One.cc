#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    if(a == b && b == c) cout << "*\n";
    else if(a == b) cout << "C\n";
    else if(b == c) cout << "A\n";
    else if(c == a) cout << "B\n";
}
