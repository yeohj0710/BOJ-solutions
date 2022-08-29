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

    string c = to_string(x + y);

    reverse(c.begin(), c.end());

    cout << stoi(c) << "\n";
}
