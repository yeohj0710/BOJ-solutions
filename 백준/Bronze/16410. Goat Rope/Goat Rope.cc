#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(3);

    double x, y; cin >> x >> y;

    double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

    double Min = INT_MAX;

    Min = min(Min, sqrt(pow(x1 - x, 2) + pow(y1 - y, 2)));
    Min = min(Min, sqrt(pow(x2 - x, 2) + pow(y1 - y, 2)));
    Min = min(Min, sqrt(pow(x2 - x, 2) + pow(y2 - y, 2)));
    Min = min(Min, sqrt(pow(x1 - x, 2) + pow(y2 - y, 2)));

    if(x1 <= x && x <= x2) Min = min({Min, abs(y1 - y), abs(y2 - y)});
    if(y1 <= y && y <= y2) Min = min({Min, abs(x1 - x), abs(x2 - x)});

    cout << Min << "\n";
}
