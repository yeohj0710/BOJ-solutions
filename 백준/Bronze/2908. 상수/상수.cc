#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int x = stoi(a), y = stoi(b);

    if(x > y) cout << x << "\n";
    else cout << y << "\n";
}
