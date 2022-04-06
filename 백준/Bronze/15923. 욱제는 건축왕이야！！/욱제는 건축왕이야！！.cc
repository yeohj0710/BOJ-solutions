#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    int sum = 0, xPrev, yPrev;
    cin >> xPrev >> yPrev;
    int x1 = xPrev, y1 = yPrev;
    N--;
    int x, y;
    while(N--) {
        cin >> x >> y;
        sum += abs(xPrev-x)+abs(yPrev-y);
        xPrev = x, yPrev = y;
    }
    cout << sum + abs(x-x1) + abs(y-y1);
}
