#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int x, y, z; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    s a, b, c;

    cin >> a.x >> a.y >> a.z;
    cin >> c.x >> c.y >> c.z;

    b.x = c.x - a.z;
    b.y = c.y / a.y;
    b.z = c.z - a.x;

    cout << b.x << " " << b.y << " " << b.z << "\n";
}
