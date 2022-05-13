#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int a = 0, b = 0, c = 0;
    for(int i=0; i<N; i++) {
        int x, y, z; cin >> x >> y >> z;

        a += x;
        b += y;
        c += z;

        if(a >= 30 && b >= 30 && c >= 30) {
            int Min = min(min(a, b), c);

            a -= Min;
            b -= Min;
            c -= Min;

            cout << Min << "\n";
        }
        else cout << "NO\n";
    }
}
