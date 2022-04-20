#include <bits/stdc++.h>
using namespace std;

struct Point { int x, y; };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    Point p1, p2, p3;
    cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;

    int ccw = p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y);

    if(ccw > 0) cout << "1\n";
    else if(ccw < 0) cout << "-1\n";
    else cout << "0\n";
}
