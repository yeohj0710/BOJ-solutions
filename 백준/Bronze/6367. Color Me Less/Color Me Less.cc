#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int a, b, c; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<s> v(16);
    for(int i=0; i<16; i++)
        cin >> v[i].a >> v[i].b >> v[i].c;

    while(true) {
        int a, b, c; cin >> a >> b >> c;
        if(a == -1 && b == -1 && c == -1) break;

        int Min = INT_MAX, x, y, z;

        for(int i=0; i<16; i++) {
            int val = pow(a - v[i].a, 2) + pow(b - v[i].b, 2) + pow(c - v[i].c, 2);

            if(val < Min) {
                Min = val;
                x = v[i].a, y = v[i].b, z = v[i].c;
            }
        }

        cout << "(" << a << "," << b << "," << c << ") maps to ("
              << x << "," << y << "," << z << ")\n";
    }
}
