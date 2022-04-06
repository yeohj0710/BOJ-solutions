#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        double r = 0, g = 0, b = 0;

        for(int i=0; i<10; i++) {
            double x, y, z; cin >> x >> y >> z;
            r += x, g += y, b += z;
        }

        cout << round(r/10) << " " << round(g/10) << " " << round(b/10) << "\n";
    }
}
