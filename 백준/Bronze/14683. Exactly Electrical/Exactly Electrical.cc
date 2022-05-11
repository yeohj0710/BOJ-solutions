#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    int cnt; cin >> cnt;

    int dist = abs(x1 - x2) + abs(y1 - y2);

    if(dist % 2 == cnt % 2 && cnt >= dist) cout << "Y\n";
    else cout << "N\n";
}
