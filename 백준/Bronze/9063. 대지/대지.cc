#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n; cin >> n;

    int minx = 10000, maxx = -10000, miny = 10000, maxy = -10000;
    while(n--) {
        int x, y; cin >> x >> y;

        if(x < minx) minx = x;
        if(x > maxx) maxx = x;
        if(y < miny) miny = y;
        if(y > maxy) maxy = y;
    }

    cout << (maxx - minx)*(maxy - miny);
}
