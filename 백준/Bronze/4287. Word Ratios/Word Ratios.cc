#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string a; cin >> a;
        if(a == "#") break;

        string b, c; cin >> b >> c;

        cout << a << " " << b << " " << c << " ";

        for(int i=0; i<a.length(); i++)
            cout << char('a' + (c[i] - 'a' + b[i] - a[i] + 26) % 26);

        cout << "\n";
    }
}
