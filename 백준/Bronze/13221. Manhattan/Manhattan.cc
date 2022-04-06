#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int n; cin >> n;
    int ansx, ansy, dis = INT_MAX;
    while(n--) {
        int x, y; cin >> x >> y;
        int temp = abs(x - a) + abs(y - b);

        if(temp < dis) {
            dis = temp;
            ansx = x;
            ansy = y;
        }
    }

    cout << ansx << " " << ansy;
}
