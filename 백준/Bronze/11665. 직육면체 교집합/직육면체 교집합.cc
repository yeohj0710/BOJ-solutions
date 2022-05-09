#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int x1, y1, z1, x2, y2, z2;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

    for(int i=1; i<N; i++) {
        int x3, y3, z3, x4, y4, z4;
        cin >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;

        x1 = max(x1, x3); x2 = min(x2, x4);
        y1 = max(y1, y3); y2 = min(y2, y4);
        z1 = max(z1, z3); z2 = min(z2, z4);
    }

    int V = (x2 - x1) * (y2 - y1) * (z2 - z1);

    if(V > 0) cout << V << "\n";
    else cout << 0 << "\n";
}
