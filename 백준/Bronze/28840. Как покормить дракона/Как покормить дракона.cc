#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string a, b; cin >> a >> b;

    int h1 = stoi(a.substr(0, 2)), m1 = stoi(a.substr(3, 2));
    int h2 = stoi(b.substr(0, 2)), m2 = stoi(b.substr(3, 2));

    int sum = h2 * 60 + m2 + 24 * 60 - (h1 * 60 + m1);

    string x = to_string(sum / 60), y = to_string(sum % 60);

    while(x.length() < 2) x = '0' + x;
    while(y.length() < 2) y = '0' + y;

    cout << x << ":" << y << "\n";
}

