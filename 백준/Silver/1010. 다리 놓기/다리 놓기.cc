#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int v[31][31] = {};

    for(int i=0; i<=30; i++) v[i][0] = 1;
    for(int i=1; i<=30; i++)
        for(int j=1; j<=i; j++) v[i][j] = v[i-1][j-1] + v[i-1][j];

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        cout << v[b][a] << "\n";
    }
}
