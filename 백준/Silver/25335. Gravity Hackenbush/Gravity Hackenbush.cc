#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    while(N--) {
        int x, y; cin >> x >> y;
    }

    int a = 0, b = 0, c = 0;

    while(M--) {
        int x, y; char z;

        cin >> x >> y >> z;

        if(z == 'R') a++;
        else if(z == 'B') b++;
        else if(z == 'G') c++;
    }

    if(c % 2 == 1) a++;

    if(a > b) cout << "jhnah917\n";
    else cout << "jhnan917\n";
}
