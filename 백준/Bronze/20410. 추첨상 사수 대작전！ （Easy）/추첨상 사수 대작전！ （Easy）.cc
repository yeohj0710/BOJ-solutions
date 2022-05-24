#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int m, s, x1, x2; cin >> m >> s >> x1 >> x2;

    for(int i=0; i<=m; i++)
        for(int j=0; j<=m; j++)
            if((i*s + j) % m == x1 && (i*x1 + j) % m == x2) {
                cout << i << " " << j << "\n";
                return 0;
            }
}
