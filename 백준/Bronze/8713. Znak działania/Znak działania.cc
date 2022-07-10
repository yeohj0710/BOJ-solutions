#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    vector<pair<int, char>> v(3);

    v[0].first = a + b;
    v[0].second = '+';

    v[1].first = a - b;
    v[1].second = '-';

    v[2].first = a * b;
    v[2].second = '*';

    sort(v.begin(), v.end(), greater<pair<int, char>>());

    if(v[0].first == v[1].first) cout << "NIE\n";
    else {
        if(a < 0) cout << "(";
        cout << a;
        if(a < 0) cout << ")";

        cout << v[0].second;

        if(b < 0) cout << "(";
        cout << b;
        if(b < 0) cout << ")";

        cout << "=";

        if(v[0].first < 0) cout << "(";
        cout << v[0].first;
        if(v[0].first < 0) cout << ")";

        cout << "\n";
    }
}
